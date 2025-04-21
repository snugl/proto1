#!/usr/bin/python3

import sys
import typing
from dataclasses import dataclass, field


def gen():
    i = 0
    while True:
        yield i
        i += 1



def tokenize(raw):
    def get_kind(char):
        match char:
            case '"':               return 'comment'
            case x if x.isalpha():  return 'alpha' 
            case ":"             :  return 'alpha' #colon is part of identifier scoping
            case x if x.isdigit():  return 'digit'
            case ';':               return 'eos'
            case '\n':              return 'newline'
            case ' ':               return 'space'
            case _:                 return 'symbol'


    stream = []
    buffer = []
    kind_old = None
    comment = False
    for char in raw:
        kind_new = get_kind(char)

        if kind_new == 'comment': comment = True
        if kind_new == 'newline': comment = False
        if comment: continue

        if kind_new != kind_old:
            token = "".join(buffer)
            buffer = []

            if kind_old not in ('space', 'newline') and token:
                stream.append(token)

        buffer.append(char)
        kind_old = kind_new

    return stream[::-1]



@dataclass
class ast:
    nodes : list[typing.Any]
    

    @dataclass
    class expr:
        kind : str
        content : typing.Any
        left  : typing.Any = None
        right : typing.Any = None
         


        @classmethod
        def parse_expr(cls, stream):
            left = ast.expr.parse_factor(stream)

            if stream[-1] not in ('+', '-', '|', '&', '^', '>>', '<<'):
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
                    assert stream.pop() == ")"
                    return expr
                case x if x.isdigit():
                    return cls(
                        kind = 'num',
                        content = int(x)
                    )
                case x if x.isalpha():
                    return cls(
                        kind = 'var',
                        content = x
                    )

        @classmethod
        def parse(cls, stream):
            return ast.expr.parse_expr(stream)




    @dataclass
    class pull:
        expr : typing.Any 
        @classmethod
        def parse(cls, stream):
            return cls(ast.expr.parse(stream))

    @dataclass
    class push:
        expr : typing.Any
        @classmethod
        def parse(cls, stream):
            return cls(ast.expr.parse(stream))

    @dataclass
    class print:
        expr : typing.Any
        @classmethod
        def parse(cls, stream):
            return cls(ast.expr.parse(stream))

    @dataclass
    class put:
        target : typing.Any
        expr   : typing.Any
        @classmethod
        def parse(cls, stream):
            target = stream.pop()
            assert stream.pop() == '='
            expr = ast.expr.parse(stream)
            return cls(target, expr)


    @dataclass
    class lab:
        iden : str
        @classmethod
        def parse(cls, stream):
            return cls(stream.pop())
            

    class jump: pass
    class sub:  pass

    class save:
        @classmethod
        def parse(cls, _):
            return cls()
    class load:
        @classmethod
        def parse(cls, _):
            return cls()


    @dataclass
    class rout:
        name  : str
        nodes : typing.Any

        @classmethod
        def parse(cls, stream):
            name    = stream.pop()
            assert stream.pop() == "{"
            nodes = ast.parse(stream)
            assert stream.pop() == "}"

            stream.append(';')
            return cls(name, nodes)

    @classmethod
    def parse(cls, stream):
        nodes = []

        while stream and stream[-1] != '}':
            word = stream.pop()

            node = getattr(ast, word).parse(stream)
            assert stream.pop() == ';'    
            print(node)

            nodes.append(node)

        return cls(nodes)

    

    



def compile(path):
    with open(path, "r") as f:
        src = f.read()

    stream = tokenize(src)
    ast.parse(stream)


def main():
    compile(sys.argv[1])


if __name__ == "__main__":
    main()
