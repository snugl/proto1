
from dataclasses import dataclass
import typing

import expr
import sym
import emission
import tree

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
    @classmethod
    def parse(cls, stream):
        target = stream.pop()
        
        if stream.peek() != sym.cond:
            return cls(target, cond=None)

        stream.expect(sym.cond)
        cond = expr.parse(stream)
        return cls(target, cond)

    def generate(self, output, ctx):
        output('call', ctx.rout_sym_table[self.target])


@dataclass
class _rout:
    #parse
    name  : str
    nodes : typing.Any

    #local compilation context
    @dataclass
    class _ctx:
        vars : typing.Any
        var_allocer : typing.Iterator
        rout_sym_table : typing.Any
        routine : typing.Any

        def allocate_variable(self, name):
            if name not in self.vars.keys():
                self.vars[name] = next(self.var_allocer)


    def generate(self, output, rout_sym_table):
        #build compilation context
        ctx = self._ctx(
            vars = {},
            var_allocer = iter(range(16)),
            rout_sym_table = rout_sym_table,
            routine = self
        )

        ret_addr_var = next(ctx.var_allocer)

        #infer variables
        for node in self.nodes:
            if hasattr(node, "infer"):
                node.infer(ctx)

        output.annotate(f'"== rout {self.name} ==')
        output.annotate(f'"\tvars: {next(ctx.var_allocer)}')


        var_addrs = list(ctx.vars.values())
        #save callee context
        for var_addr in var_addrs:
            output('save', var_addr)

        #generate routine behavior
        for node in self.nodes:
            node.generate(output, ctx)

        #restore callee context
        for var_addr in var_addrs[::-1]:
            output('restore', var_addr)
       

        output('return')



    @classmethod
    def parse(cls, stream):
        name    = stream.pop()
        stream.expect("{")
        subnodes = tree.parse(stream)
        stream.expect("}")

        node = cls(name, subnodes)
        return node
