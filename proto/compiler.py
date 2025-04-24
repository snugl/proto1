#!/usr/bin/python3

import sys
import typing
from dataclasses import dataclass, field


def gen():
    i = 0
    while True:
        yield i
        i += 1



def tokenize(path):
    with open(path, "r") as f:
        raw = f.read()

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

    @dataclass
    class token:
        content : str = ""
        line    : int = 0
        path    : str = ""

        def __str__(self):
            return self.content



    token_buffer = []
    buffer = []
    kind_old = None
    comment = False
    line = 1
    for char in raw:
        kind_new = get_kind(char)


        if kind_new == 'comment': comment = True
        if kind_new == 'newline': comment = False
        if comment: continue

        if kind_new != kind_old:
            token_content = "".join(buffer)
            buffer = []

            if kind_old not in ('space', 'newline') and token_content:
                token_buffer.append(token(
                    token_content, line, path
                ))

        buffer.append(char)
        kind_old = kind_new
        if char == '\n': line += 1

    @dataclass
    class streamer:
        token_buffer : list[token]

        #in case something goes wrong, this token is responsible
        last_token : token = field(default_factory=token)

        def _pop(self):
            return self.token_buffer.pop(0)

        def pop(self):
            self.last_token = self._pop()
            return self.last_token.content

        def peek(self):
            return self.token_buffer[0].content

        def expect(self, content):
            token = self._pop()
            if content != str(token):
                print(f"Error at {self.last_token.path}:{self.last_token.line}")
                print(f"\tExpected '{content}' but got '{token}'")
                sys.exit(1)

        def has(self):
            return len(self.token_buffer) > 0


    return streamer(token_buffer)


class sym:
    ops = ('+', '-', '|', '&', '^', '>>', '<<', '==', '!=', '<', '>')
    cond = '~'


def ensure_is_allocated(ctx, target):
    if target not in ctx.vars.keys():
        ctx.vars[target] = next(ctx.var_allocer)





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
                case x if x.isalpha():
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


    @dataclass
    class _pull:
        target : typing.Any 
        @classmethod
        def parse(cls, stream):
            return cls(stream.pop())

        def generate(self, output, ctx):
            ensure_is_allocated(ctx, self.target)
            output('pull', ctx.vars[self.target])


    @dataclass
    class _push:
        expr : typing.Any
        @classmethod
        def parse(cls, stream):
            return cls(ast.expr.parse(stream))

        def generate(self, output, ctx):
            self.expr.generate(output, ctx)

    @dataclass
    class _debug:
        expr : typing.Any
        @classmethod
        def parse(cls, stream):
            return cls(ast.expr.parse(stream))

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
            expr = ast.expr.parse(stream)
            return cls(target, expr)

        def generate(self, output, ctx):
            ensure_is_allocated(ctx, self.target)

            self.expr.generate(output, ctx)
            output('pull')
            output('store', ctx.vars[self.target])



    @dataclass
    class _lab:
        label : str
        @classmethod
        def parse(cls, stream):
            return cls(stream.pop())

        def generate(self, output, _):
            output.define(self.label)
            

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
            cond = ast.expr.parse(stream)
            return cls(label, cond)

        def generate(self, output, ctx):
            target_label = emission.label(self.label, output)
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
            cond = ast.expr.parse(stream)
            return cls(label, cond)

        def generate(self, output, ctx):
            output('call', ctx.rout_sym_table[self.target])

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

        def generate(self, _, ctx):
            ctx.pending_in_param.append(self.expr)

    @dataclass
    class _out:
        expr : typing.Any
        @classmethod
        def parse(cls, stream):
            return cls(ast.expr.parse(stream))

        def generate(self, _, ctx):
            ctx.pending_out_param.append(self.expr)


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
            pending_in_param  : typing.Any = field(default_factory=lambda: [])
            pending_out_param : typing.Any = field(default_factory=lambda: [])


        def generate(self, output, rout_sym_table):
            #build compilation context
            ctx = self._ctx(
                vars = {},
                var_allocer = iter(range(16)),
                rout_sym_table = rout_sym_table
            )
            
            for node in self.nodes:
                node.generate(output, ctx)




        @classmethod
        def parse(cls, stream):
            name    = stream.pop()
            stream.expect("{")
            subnodes = ast.parse(stream)
            stream.expect("}")

            node = cls(name, subnodes)
            return node

    @classmethod
    def parse(cls, stream):
        nodes = []

        while stream.has() and stream.peek() != '}':
            word = stream.pop()

            name = f"_{word}"
            node = getattr(ast, name).parse(stream)
            if word != "rout":
                stream.expect(";")

            nodes.append(node)

        return cls(nodes)

    def routine(self, output, target_name):
        target_routine = [
            x for x in self.nodes 
            if x.name == target_name
        ][0]

        #collect and emit dependencies of routine
        depend_table = {}
        for node in target_routine.nodes:
            if type(node) is ast._sub:
                depend_name = node.target
                depend_table[depend_name] = self.routine(output, depend_name)

        target_address = output.address()
        target_routine.generate(output, depend_table)
        return target_address

    


@dataclass
class emission:
    cmds : typing.Any = field(default_factory=lambda: [])
    labels : typing.Any = field(default_factory=lambda: {})

    @dataclass
    class command: 
        inst : str
        arg : typing.Any

        def render(self):
            str_arg = str(self.arg) if self.arg is not None else ''
            return f"{self.inst} {str_arg}".strip()

    @dataclass
    class label:
        name : str
        emission : typing.Any

        def __str__(self):
            return str(self.emission.labels[self.name])

    def define(self, name):
        self.labels[name] = self.address()


    def __call__(self, inst, arg=None):
        cmd = emission.command(inst, arg)
        self.cmds.append(cmd)

    def address(self):
        return len(self.cmds)

    def render(self):
        return "\n".join(map(lambda x: x.render(), self.cmds))


    


def compile(path):
    stream = tokenize(path)
    root = ast.parse(stream)

    output = emission()
    address = root.routine(output, 'main')
    
    with open('build.txt', "w") as f:
        f.write(output.render())



def main():
    compile(sys.argv[1])


if __name__ == "__main__":
    main()
