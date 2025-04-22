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


class sym:
    ops = ('+', '-', '|', '&', '^', '>>', '<<', '==', '!=', '<', '>')
    cond = '~'



@dataclass
class ast:
    nodes : list[typing.Any]

    def __iter__(self):
        return iter(self.nodes)

    def __len__(self):
        return len(self.nodes)

    def __getitem__(self, key):
        return self.nodes[key]
    

    @dataclass
    class expr:
        kind : str
        content : typing.Any
        left  : typing.Any = None
        right : typing.Any = None
         


        @classmethod
        def parse_expr(cls, stream):
            left = ast.expr.parse_factor(stream)

            if stream[-1] not in sym.ops:
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


        def generate(self, output, locals):
            match self.kind:
                case 'num':
                    output('const', self.content)
                    output('push')
                case 'var':
                    output('load', locals[self.content])
                    output('push')
                case 'op':
                    self.left.generate(output, locals)
                    self.right.generate(output, locals)
                    output('pull')
                    output('store', 100) # 100 compiler temp
                    output('pull')
                    output({
                        '+': 'add',
                        '-': 'sub',
                    }[self.content], 100)
                    output('push')


    @dataclass
    class _pull:
        expr : typing.Any 
        @classmethod
        def parse(cls, stream):
            return cls(ast.expr.parse(stream))

    @dataclass
    class _push:
        expr : typing.Any
        @classmethod
        def parse(cls, stream):
            return cls(ast.expr.parse(stream))

    @dataclass
    class _debug:
        expr : typing.Any
        @classmethod
        def parse(cls, stream):
            return cls(ast.expr.parse(stream))

        def generate(self, output, locals, _):
            self.expr.generate(output, locals)
            output('pull')
            output('debug')



    @dataclass
    class _put:
        target : typing.Any
        expr   : typing.Any
        @classmethod
        def parse(cls, stream):
            target = stream.pop()
            assert stream.pop() == '='
            expr = ast.expr.parse(stream)
            return cls(target, expr)

        def generate(self, output, locals, allocator):
            if self.target not in locals.keys():
                locals[self.target] = next(allocator)

            self.expr.generate(output, locals)
            output('pull')
            output('store', locals[self.target])



    @dataclass
    class _lab:
        label : str
        @classmethod
        def parse(cls, stream):
            return cls(stream.pop())
            

    @dataclass
    class _jump:
        label : str
        cond  : typing.Any
        @classmethod
        def parse(cls, stream):
            label = stream.pop()
            
            if stream[-1] != sym.cond:
                return cls(label, cond=None)

            assert stream.pop() == sym.cond
            cond = ast.expr.parse(stream)
            return cls(label, cond)

    @dataclass
    class _sub:
        label : str
        cond  : typing.Any
        @classmethod
        def parse(cls, stream):
            label = stream.pop()
            
            if stream[-1] != sym.cond:
                return cls(label, cond=None)

            assert stream.pop() == sym.cond
            cond = ast.expr.parse(stream)
            return cls(label, cond)

    class _save:
        @classmethod
        def parse(cls, _):
            return cls()
    class _load:
        @classmethod
        def parse(cls, _):
            return cls()

    @dataclass
    class _in:
        expr : typing.Any
        @classmethod
        def parse(cls, stream):
            return cls(ast.expr.parse(stream))

    @dataclass
    class _out:
        expr : typing.Any
        @classmethod
        def parse(cls, stream):
            return cls(ast.expr.parse(stream))


    @dataclass
    class _rout:
        #parse
        name  : str
        nodes : typing.Any

        #eval
        locals : typing.Any = field(default_factory=lambda: {})

        def generate(self, output):
            allocator = iter(range(16))
            
            for node in self.nodes:
                node.generate(output, self.locals, allocator)




        @classmethod
        def parse(cls, stream):
            name    = stream.pop()
            assert stream.pop() == "{"
            subnodes = ast.parse(stream)
            assert stream.pop() == "}"

            stream.append(';')
            node = cls(name, subnodes)
            return node

    @classmethod
    def parse(cls, stream):
        nodes = []

        while stream and stream[-1] != '}':
            word = stream.pop()

            name = f"_{word}"
            node = getattr(ast, name).parse(stream)
            assert stream.pop() == ';'

            nodes.append(node)

        return cls(nodes)

    def generate(self, output):
        table = {}

        for rout_node in self.nodes:
            table[rout_node.name] = output.address()
            rout_node.generate(output)

        return table

    


@dataclass
class emission:
    cmds : typing.Any = field(default_factory=lambda: [])

    @dataclass
    class command: 
        inst : str
        arg : typing.Any

        def render(self):
            str_arg = self.arg if self.arg is not None else ''
            return f"{self.inst} {str_arg}".strip()

    def __call__(self, inst, arg=None):
        cmd = emission.command(inst, arg)
        self.cmds.append(cmd)

    def address(self):
        return len(self.cmds)

    def render(self):
        return "\n".join(map(lambda x: x.render(), self.cmds))


    


def compile(path):
    with open(path, "r") as f:
        src = f.read()

    stream = tokenize(src)
    root = ast.parse(stream)

    output = emission()
    sym_table = root.generate(output)
    
    with open('build.txt', "w") as f:
        f.write(output.render())



def main():
    compile(sys.argv[1])


if __name__ == "__main__":
    main()
