
from dataclasses import dataclass
import typing

import sym
import error

@dataclass
class node:
    kind : str
    content : typing.Any
    left  : typing.Any = None
    right : typing.Any = None

    def infer(self, ctx):
        #only variable can infer
        if self.kind == 'var':
            ctx.allocate_variable(self.content)

    #generate reads from acc
    def write(self, output, ctx):
        #either variable or dot operator

        match self.kind:
            case 'var' if self.content in ctx.vars: #might be global constant
                output('store', ctx.vars[self.content])
            case 'op' if self.content == sym.op_dot:
                #preserve original
                output('push') 

                #compute target addr
                self.right.generate(output, ctx)
                output('push')
                self.left.generate(output, ctx)
                output('add')

                #perform enref
                output('ref')
                
            case _:
                error.error("Unable to write to expression");
                

     
    #generate outputs to acc
    def generate(self, output, ctx):
        vars = ctx.vars
        match self.kind:
            case 'num':
                output('const', self.content)
            case 'var' if self.content in vars:
                output('load', vars[self.content])
            case 'var' if self.content in ctx.tree.consts:
                output('const', ctx.tree.consts[self.content])
            case 'op':
                self.right.generate(output, ctx)
                output('push')
                self.left.generate(output, ctx)

                match self.content:
                    case sym.op_add: output('add'),
                    case sym.op_sub: output('sub'),
                    case sym.op_gt : output('greater'), #acc is greater
                    case sym.op_lt : output('lesser'),  #acc is lesser
                    case sym.op_eq : output('equal'),
                    case sym.op_mul: output('mul'),
                    case sym.op_dot:
                        output('add')
                        output('deref')



def parse_expr(stream):
    left = parse_factor(stream)

    if stream.peek() not in sym.ops:
        return left

    op = stream.pop()
    right = parse_factor(stream)
    return node(
        kind = 'op',
        content = op,
        left = left,
        right = right
    )

def parse_factor(stream):
    match stream.pop():
        case "(":
            expr = parse_expr(stream)
            stream.expect(")")
            return expr
        case x if x.isdigit():
            return node(
                kind = 'num',
                content = int(x)
            )
        case _:
            return node(
                kind = 'var',
                content = x
            )


def parse(stream):
    return parse_expr(stream)


