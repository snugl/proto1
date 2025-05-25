
from dataclasses import dataclass
from dataclasses import field
import typing

import expr
import sym
import emission
import tree
import abstract

@dataclass
class _pull:
    target : typing.Any 
    @classmethod
    def parse(cls, stream):
        return cls(stream.pop())

    def infer(self, ctx):
        ctx.allocate_variable(self.target)

    def generate(self, output, ctx):
        output('pull')
        output('store', ctx.vars[self.target])


@dataclass
class _push:
    expr : typing.Any
    @classmethod
    def parse(cls, stream):
        return cls(expr.parse(stream))

    def generate(self, output, ctx):
        self.expr.generate(output, ctx)

@dataclass
class _debug:
    expr : typing.Any
    @classmethod
    def parse(cls, stream):
        return cls(expr.parse(stream))

    def generate(self, output, ctx):
        self.expr.generate(output, ctx)
        output('pull')
        output('debug')



@dataclass
class _put:
    target : typing.Any
    expr   : typing.Any
    @classmethod
    def parse(cls, stream):
        target = stream.pop()
        stream.expect("=")
        node = expr.parse(stream)
        return cls(target, node)

    def infer(self, ctx):
        ctx.allocate_variable(self.target)

    def generate(self, output, ctx):
        self.expr.generate(output, ctx)
        output('pull')
        output('store', ctx.vars[self.target])



@dataclass
class _lab:
    label : str
    @classmethod
    def parse(cls, stream):
        return cls(stream.pop())

    def generate(self, output, ctx):
        output.define(self.label, ctx.routine)
        

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
        target_label = emission.reference(self.label, ctx.routine, output)
        if self.cond is None:
            output('jump', target_label)

        else:
            self.cond.generate(output, ctx)
            output('pull')
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

        if stream.peek() == ";":
            return cls(target, cond)

        #interface
        imap = {}
        stream.expect("(")
        while stream.peek() != ")":
            #callee side
            internal = stream.pop()
            stream.expect("|")
            #caller side
            external = expr.parse(stream) #if stream.peek() != ";" else None
            stream.expect(",")

            imap[internal] = external
        stream.expect(")")

        return cls(target, cond, imap)


    def generate(self, output, ctx):
        target_obj = ctx.tree.get(self.target)
        pinter = target_obj.pinter

        #construct in-paramter space
        #THE ORDER IS IMPORTANT
        for param in pinter.in_param:
            self.imap[param].generate(output, ctx)

        #construct out-parameter space
        output('alloc', len(pinter.out_param))

        output('call', target_obj.address)

        #deconstruct out-parameters
        for param in pinter.out_param:
            target = self.imap[param].content
            output('pull')
            output('store', ctx.vars[target])     

        #deconstruct in-paramters
        output('free', len(pinter.in_param))


@dataclass
class _rout:
    #parse
    name  : str = ""
    nodes : typing.Any = None

    pinter : abstract.param_interface = field(default_factory=lambda: abstract.param_interface())

    address : typing.Any = None

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
        self.address = output.address() #routine origin address

        #build compilation context
        ctx = self._ctx(
            vars = {},
            var_allocer = iter(range(16)),
            tree = tree,
            routine = self
        )

        #generate interface binding
        ctx.vars.update(self.pinter.generate_variable_binding())

        #infer variables
        for node in self.nodes:
            if hasattr(node, "infer"):
                node.infer(ctx)

        #reserve local stack space for variables
        var_count = next(ctx.var_allocer)
        output.annotate(f'"== rout {self.name} ==')
        output.annotate(f'"\tvars: {var_count}')
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
        if stream.peek() == "(":
            stream.expect("(")
            while stream.peek() != ")":
                match stream.pop():
                    case "in":  self.pinter.add_in(stream.pop())
                    case "out": self.pinter.add_out(stream.pop())
                stream.expect(";")
            stream.expect(")")

        stream.expect("{")
        self.nodes = tree.parse(stream)
        stream.expect("}")

        return self
