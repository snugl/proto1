
from dataclasses import dataclass
import typing


@dataclass
class expr:
    kind : str
    content : typing.Any
    left  : typing.Any = None
    right : typing.Any = None
     


    @classmethod
    def parse_expr(cls, stream):
        left = ast.expr.parse_factor(stream)

        if stream.peek() not in sym.ops:
            return left

        op = stream.pop()
        right = ast.expr.parse_factor(stream)
        return cls(
            kind = 'op',
            content = op,
            left = left,
            right = right
        )

    @classmethod
    def parse_factor(cls, stream):
        match stream.pop():
            case "(":
                expr = ast.expr.parse_expr(stream)
                stream.expect(")")
                return expr
            case x if x.isdigit():
                return cls(
                    kind = 'num',
                    content = int(x)
                )
            case _:
                return cls(
                    kind = 'var',
                    content = x
                )

    @classmethod
    def parse(cls, stream):
        return ast.expr.parse_expr(stream)


    def generate(self, output, ctx):
        vars = ctx.vars
        match self.kind:
            case 'num':
                output('const', self.content)
                output('push')
            case 'var':
                output('load', vars[self.content])
                output('push')
            case 'op':
                self.left.generate(output, ctx)
                self.right.generate(output, ctx)
                output('pull')
                output('store', 100) # 100 compiler temp
                output('pull')
                output({
                    '+': 'add',
                    '-': 'sub',
                    '>': 'greater', #acc is greater
                    '<': 'lesser',  #acc is lesser
                    '==': 'equal',
                }[self.content], 100)
                output('push')
