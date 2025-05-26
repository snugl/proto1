
from dataclasses import dataclass
import typing

import sym

@dataclass
class node:
    kind : str
    content : typing.Any
    left  : typing.Any = None
    right : typing.Any = None
     
    #generate outputs to acc
    def generate(self, output, ctx):
        vars = ctx.vars
        match self.kind:
            case 'num':
                output('const', self.content)
            case 'var':
                output('load', vars[self.content])
            case 'op':
                self.right.generate(output, ctx)
                output('push')
                self.left.generate(output, ctx)
                output({
                    '+': 'add',
                    '-': 'sub',
                    '>': 'greater', #acc is greater
                    '<': 'lesser',  #acc is lesser
                    '==': 'equal',
                }[self.content])


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


