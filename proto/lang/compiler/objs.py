
from dataclasses import dataclass
from dataclasses import field
import typing

import expr
import sym
import emission
import tree
import abstract

@dataclass
class _debug:
    expr : typing.Any
    @classmethod
    def parse(cls, stream):
        return cls(expr.parse(stream))

    def generate(self, output, ctx):
        self.expr.generate(output, ctx)
        output('debug')



@dataclass
class _put:
    target : expr.node
    expr   : expr.node
    @classmethod
    def parse(cls, stream):
        target = expr.parse(stream) #lvalue
        stream.expect(sym.assign)
        node = expr.parse(stream)   #rvalue
        return cls(target, node)

    def infer(self, ctx):
        if self.target.kind == 'var':
            ctx.allocate_variable(self.target.content)
        #!dot operator can not infer!

    def generate(self, output, ctx):
        self.expr.generate(output, ctx)
        self.target.write(output, ctx)



@dataclass
class _lab:
    label : str
    @classmethod
    def parse(cls, stream):
        return cls(stream.pop())

    def generate(self, output, ctx):
        output.define(self.label, ctx.routine.name)
        

@dataclass
class _jump:
    label : str
    cond  : typing.Any
    @classmethod
    def parse(cls, stream):
        label = stream.pop()
        
        if stream.peek() != sym.cond:
            return cls(label, cond=None)

        stream.expect(sym.cond)
        cond = expr.parse(stream)
        return cls(label, cond)

    def generate(self, output, ctx):
        target_label = emission.reference(self.label, ctx.routine.name, output)
        if self.cond is None:
            output('jump', target_label)

        else:
            self.cond.generate(output, ctx)
            output('branch', target_label)

@dataclass
class _sub:
    target : str
    cond  : typing.Any
    imap : typing.Any = field(default_factory=lambda: {})

    @classmethod
    def parse(cls, stream):
        target = stream.pop()
        cond = None

        if stream.peek() == sym.cond:
            stream.expect(sym.cond)
            cond = expr.parse(stream)

        if stream.peek() == sym.eos:
            return cls(target, cond)

        #interface
        imap = {}
        stream.expect(sym.param_start)
        while stream.peek() != sym.param_end:
            #callee side
            internal = stream.pop()
            stream.expect("|")
            #caller side
            external = expr.parse(stream) #if stream.peek() != ";" else None
            if stream.peek() == ",":
                stream.pop()

            imap[internal] = external
        stream.expect(sym.param_end)

        return cls(target, cond, imap)


    def generate(self, output, ctx):
        target_obj = ctx.tree.get(self.target)
        pinter = target_obj.pinter

        #construct in-paramter space
        #THE ORDER IS IMPORTANT
        for param in pinter.in_param:
            self.imap[param].generate(output, ctx)
            output('push')

        #construct out-parameter space
        output('alloc', len(pinter.out_param))

        target_label = emission.reference(None, target_obj.name, output)
        output('call', target_label)

        #deconstruct out-parameters
        for param in pinter.out_param:
            target = self.imap[param].content
            ctx.allocate_variable(target)
            output('pull')
            output('store', ctx.vars[target])     

        #deconstruct in-paramters
        output('free', len(pinter.in_param))

@dataclass
class _new:
    size   : expr.node
    target : str

    @classmethod
    def parse(cls, stream):
        size = expr.parse(stream)
        stream.expect(sym.alloc_arrow)
        target = stream.pop()

        return cls(size, target)

    def infer(self, ctx):
        ctx.allocate_variable(self.target)

    def generate(self, output, ctx):
        self.size.generate(output, ctx)
        output('dyn')
        output('store', ctx.vars[self.target])
    
     


@dataclass
class _rout:
    #parse
    name  : str = ""
    nodes : typing.Any = None

    pinter : abstract.param_interface = field(default_factory=lambda: abstract.param_interface())

    #local compilation context
    @dataclass
    class _ctx:
        vars : typing.Any
        var_allocer : typing.Iterator
        tree : typing.Any
        routine : typing.Any

        def allocate_variable(self, name):
            if name not in self.vars.keys():
                self.vars[name] = next(self.var_allocer)


    def generate(self, output, tree):
        output.define(None, self.name)

        #build compilation context
        ctx = self._ctx(
            vars = {},
            var_allocer = iter(range(16)),
            tree = tree,
            routine = self
        )

        #generate and interlace interface binding
        ctx.vars.update(self.pinter.generate_variable_binding())

        #infer variables
        for node in self.nodes:
            if hasattr(node, "infer"):
                node.infer(ctx)

        #reserve local stack space for variables
        var_count = next(ctx.var_allocer)
        output.annotate(f'"rout {self.name}')
        output.annotate(f'"\tvars: {list(ctx.vars)}')
        output("alloc", var_count)


        #generate routine behavior
        for node in self.nodes:
            node.generate(output, ctx)

        #free variable space
        output("free", var_count)

        output('return')



    @classmethod
    def parse(cls, stream):
        self = cls()
        self.name = stream.pop()
        
        #interface
        if stream.peek() == sym.param_start:
            stream.expect(sym.param_start)
            while stream.peek() != sym.param_end:
                match stream.pop():
                    case "in":  self.pinter.add_in(stream.pop())
                    case "out": self.pinter.add_out(stream.pop())
                stream.expect(sym.eos)
            stream.expect(sym.param_end)

        stream.expect(sym.block_start)
        self.nodes = tree.parse(stream)
        stream.expect(sym.block_end)

        return self


@dataclass
class _seq:
    name : str
    fields : list[str]

    @classmethod
    def parse(cls, stream):
        name = stream.pop()
        fields = []

        stream.expect(sym.block_start)
        while stream.peek() != sym.block_end:
            fields.append(stream.pop())
            stream.maybe(",") #comma delims are optional
        
        stream.expect(sym.block_end)

        return cls(
            name,
            fields
        )

    def get_size(self):
        return len(self.fields)

    def render_constants(self):
        consts = {}

        #seq length by name
        consts[self.name] = self.get_size()

        #seq field offsets by scoped name
        for offset, field_name  in enumerate(self.fields):
            name = f"{self.name}::{field_name}"
            consts[name] = offset

        return consts


