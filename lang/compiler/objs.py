
from dataclasses import dataclass
from dataclasses import field
import typing
import os

import expr
import sym
import emission
import tree
import abstract

@dataclass
class _debug:
    target : typing.Any
    kind   : str = ''
    @classmethod
    def parse(cls, stream):

        match stream.peek_raw().kind:
            case 'quote': return cls(stream.pop(),       "string")
            case _      : return cls(expr.parse(stream), "expr")

    def generate(self, output, ctx):
        match self.kind:
            case "expr":
                self.target.generate(output, ctx)
                output('debug', 0) #debug print
            case "string":
                reading_format_name = False
                format_name = []
                for char in self.target + "\n":
                    if char == '}':
                        reading_format_name = False 
                        var_addr = ctx.vars["".join(format_name)]
                        format_name = []
                        output('load', var_addr)
                        output('debug', 2)
                    elif char == '{':
                        reading_format_name = True
                    elif reading_format_name:
                        format_name.append(char)
                    else:
                        output('const', ord(char))
                        output('debug', 1)


@dataclass
class _write:
    target: expr.node

    @classmethod
    def parse(cls, stream):
        return cls(target = expr.parse(stream))

    def generate(self, output, ctx):
        self.target.generate(output, ctx)
        output('write')

@dataclass
class _use:
    path : str

    @classmethod
    def parse(cls, stream):
        path = stream.pop()
        return cls(path = path)

    #called by tree.node itself
    def expand(self, root):
        module_filename = os.path.basename(self.path)
        module_name = os.path.splitext(module_filename)[0]

        module_tree = tree.prepare(self.path)
        root.inject(module_tree)



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
        self.target.infer(ctx)

    def generate(self, output, ctx):
        self.expr.generate(output, ctx)
        self.target.write(output, ctx)



@dataclass
class _lab:
    label : str
    @classmethod
    def parse(cls, stream):
        return cls(
            stream.pop() if 
            stream.peek() != sym.eos 
            else None
        )

    def generate(self, output, ctx):
        output.define_local_label(self.label, ctx.routine.name)
        

@dataclass
class _jump:
    label : str
    cond  : typing.Any
    @classmethod
    def parse(cls, stream):
        label = (stream.pop() if
            stream.peek() not in (sym.eos, sym.binding)
            else None)
        
        if stream.peek() != sym.binding:
            return cls(label, cond=None)

        stream.expect(sym.binding)
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

        if stream.peek() == sym.binding:
            stream.expect(sym.binding)
            cond = expr.parse(stream)

        if stream.peek() == sym.eos:
            return cls(target, cond)

        #interface
        imap = {}
        stream.expect(sym.param_start)
        while stream.peek() != sym.param_end:
            #callee side
            internal = stream.pop()
            stream.expect(sym.binding)
            #caller side
            external = expr.parse(stream) #if stream.peek() != ";" else None
            if stream.peek() == ",":
                stream.pop()

            imap[internal] = external
        stream.expect(sym.param_end)

        return cls(target, cond, imap)

    def infer(self, ctx):
        target_obj = ctx.tree.get_routine(self.target)
        pinter = target_obj.pinter

        for binding_name in pinter.out_param:
            variable_name = self.imap[binding_name].content
            ctx.allocate_variable(variable_name)


    def generate(self, output, ctx):
        target_obj = ctx.tree.get_routine(self.target)
        pinter = target_obj.pinter

        #construct in-paramter space
        #THE ORDER IS IMPORTANT
        for param in pinter.in_param:
            self.imap[param].generate(output, ctx)
            output('push')

        #construct out-parameter space
        output('alloc', len(pinter.out_param))

        routine_origin = ctx.tree.lookup_routine_origin(target_obj.name)
        output('call', routine_origin)

        #deconstruct out-parameters
        for param in pinter.out_param:
            target = self.imap[param].content
            output('pull')
            output('store', ctx.vars[target])     

        #deconstruct in-paramters
        output('free', len(pinter.in_param))

@dataclass
class _trans:
    size   : expr.node
    target : expr.node #expr has to be writeable

    @classmethod
    def parse(cls, stream):
        size = expr.parse(stream)
        stream.expect(sym.binding)
        target = expr.parse(stream)

        return cls(size, target)

    def infer(self, ctx):
       self.target.infer(ctx)

    def generate(self, output, ctx):
        self.size.generate(output, ctx)
        output('trans')
        self.target.write(output, ctx)


@dataclass
class _pers:
    size   : expr.node
    target : expr.node

    @classmethod
    def parse(cls, stream):
        size = expr.parse(stream)
        stream.expect(sym.binding)
        target = expr.parse(stream)

        return cls(size, target)

    def infer(self, ctx):
       self.target.infer(ctx)

    def generate(self, output, ctx):
        self.size.generate(output, ctx)
        output('pers')
        self.target.write(output, ctx)
    
@dataclass
class _void:
    target : expr.node

    @classmethod
    def parse(cls, stream):
        target = expr.parse(stream)
        return cls(target)

    def infer(self, ctx):
        #should be able to allocate
        #(though it doesn't make sense lolz)
        self.target.infer(ctx)

    def generate(self, output, ctx):
        self.target.generate(output, ctx)
        output('void')



@dataclass
class _iter:
    iterator : expr.node
    block    : expr.node
    body     : typing.Any
    counter_var_addr : int = 0

    @classmethod
    def parse(cls, stream):
        #header
        iterator = expr.parse(stream)
        stream.expect(sym.binding)
        block = expr.parse(stream)

        #body
        stream.expect(sym.block_start)
        body = tree.parse(stream)
        stream.expect(sym.block_end)

        return cls(iterator, block, body)

    def infer(self, ctx):
        self.iterator.infer(ctx)
        self.counter_var_addr = next(ctx.var_allocer)

    def generate(self, output, ctx):
        #put block origin onto stack for save-keeping
        self.block.generate(output, ctx) 
        output('push')

        #initalize counter
        output('const', 0)
        output('store', self.counter_var_addr)

        #loop start
        loop_start_addr = output.address()

        #update iterator
        output('dup')
        output('load', self.counter_var_addr)
        output('add')
        output('deref')
        self.iterator.write(output, ctx)

        self.body.generate(output, ctx)

        #aquire block length
        output('dup')
        output('pull')
        output('dec')
        output('deref')
        output('dec') #length of block content, so discard header size
        output('push')
    
        #increment loop
        output('load', self.counter_var_addr)
        output('inc')
        output('store', self.counter_var_addr)

        #repeat loop
        output('lesser')
        output('branch', loop_start_addr)

        #remove block origin
        output('free', 1)



@dataclass
class _enum:
    iterator : expr.node
    index    : expr.node
    block    : expr.node
    body     : typing.Any

    @classmethod
    def parse(cls, stream):
        #header
        iterator = expr.parse(stream)
        stream.expect(sym.index)
        index    = expr.parse(stream)
        stream.expect(sym.binding)
        block    = expr.parse(stream)

        #body
        stream.expect(sym.block_start)
        body = tree.parse(stream)
        stream.expect(sym.block_end)

        return cls(iterator, index, block, body)

    def infer(self, ctx):
        self.iterator.infer(ctx)
        self.index.infer(ctx)

    def generate(self, output, ctx):
        #put block origin onto stack for save-keeping
        self.block.generate(output, ctx) 
        output('push')

        #initalize counter
        output('const', 0)
        self.index.write(output, ctx)

        #loop start
        loop_start_addr = output.address()

        #update iterator
        output('dup')
        self.index.generate(output, ctx)
        output('add')
        output('deref')
        self.iterator.write(output, ctx)

        self.body.generate(output, ctx)

        #aquire block length
        output('dup')
        output('pull')
        output('dec')
        output('deref')
        output('dec') #length of block content, so discard header size
        output('push')
    
        #increment loop
        self.index.generate(output, ctx)
        output('inc')
        self.index.write(output, ctx)

        #repeat loop
        output('lesser')
        output('branch', loop_start_addr)


@dataclass
class _count:
    start    : expr.node
    end      : expr.node
    index    : expr.node
    body     : typing.Any

    @classmethod
    def parse(cls, stream):
        #header
        index = expr.parse(stream)
        stream.expect(sym.binding)
        start = expr.parse(stream)
        stream.expect(sym.ranger)
        end   = expr.parse(stream)

        #body
        stream.expect(sym.block_start)
        body = tree.parse(stream)
        stream.expect(sym.block_end)

        return cls(start, end, index, body)

    def infer(self, ctx):
        self.index.infer(ctx)

    def generate(self, output, ctx):
        #initalize index
        self.start.generate(output, ctx)
        self.index.write(output, ctx)

        #loop start
        loop_start_addr = output.address()

        self.body.generate(output, ctx)

        #loop end
        self.index.generate(output, ctx)
        output('inc')
        self.index.write(output, ctx)
        output('push')
        self.end.generate(output, ctx)
        output('greater')
        output('branch', loop_start_addr)




@dataclass
class _rout:
    #parse
    name  : str = ""
    sapling : typing.Any = None

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

    def dependencies(self, output, tree):
        #collect and emit dependencies of routine
        for node in self.sapling:
            if type(node) is not _sub:
                continue 

            depend = tree.get_routine(node.target)
            if self.name == depend.name: #recursion
                continue

            depend.generate(output, tree)


    def generate(self, output, tree):
        self.dependencies(output, tree)

        tree.define_routine_origin(self.name, output.address())

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
        for node in self.sapling:
            if hasattr(node, "infer"):
                node.infer(ctx)

        #reserve local stack space for variables
        var_count = next(ctx.var_allocer)
        output.annotate(f'"rout {self.name}')
        output.annotate(f'"\tvars: {list(ctx.vars)}')
        output("alloc", var_count)


        #generate routine behavior
        self.sapling.generate(output, ctx)
        #for node in self.sapling:
        #    node.generate(output, ctx)

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
        self.sapling = tree.parse(stream)
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


