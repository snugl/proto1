
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
                    case sym.op_neq: output('nequal'),
                    case sym.op_mul: output('mul'),
                    case sym.op_dot:
                        output('add')
                        output('deref')

            case 'string':
                output('string', f"'{self.content}'")



def parse_expr(stream, prec_level):
    left = parse_higher(stream, prec_level)

    if str(stream.peek()) not in sym.prec[prec_level]:
        return left

    op = stream.pop()
    right = parse_higher(stream, prec_level)
    return node(
        kind = 'op',
        content = op,
        left = left,
        right = right
    )

#parse at higher precedence level
def parse_higher(stream, prec_level):
    prec_level_next = prec_level + 1
    if prec_level_next < len(sym.prec):
        return parse_expr(stream, prec_level_next)
    else:
        return parse_terminal(stream)

def parse_terminal(stream):
    match stream.pop_raw():
        case x if x.content == '(':
            expr = parse_expr(stream, 0)
            stream.expect(")")
            return expr
        case x if x.kind == 'numb':
            return node(
                kind = 'num',
                content = int(x.content)
            )
        case x if x.kind == 'iden':
            return node(
                kind = 'var',
                content = x.content
            )
        case x if x.kind == 'quote':
            return node(
                kind = 'string',
                content = x.content
            )
        case x:
            error.stream_error(stream, f"Unable to parse terminal '{x}' of type {x.kind}")


def parse(stream):
    return parse_expr(stream, 0)


