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
            case x if x.isalpha():  return 'iden' 
            case x if x.isdigit():  return 'iden'
            case ":"             :  return 'iden' #colon is part of identifier scoping
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

            def allocate_variable(self, name):
                if name not in self.vars.keys():
                    self.vars[name] = next(self.var_allocer)


        def generate(self, output, rout_sym_table):
            #build compilation context
            ctx = self._ctx(
                vars = {},
                var_allocer = iter(range(16)),
                rout_sym_table = rout_sym_table
            )

            ret_addr_var = next(ctx.var_allocer)

            #infer variables
            for node in self.nodes:
                if hasattr(node, "infer"):
                    node.infer(ctx)

            output.annotate(f"== rout {self.name} ==")
            output.annotate(f"\tvars: {next(ctx.var_allocer)}")


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
                if depend_name == target_name: #recursion
                    continue

                depend_table[depend_name] = self.routine(output, depend_name)

        target_address = output.address()
        depend_table[target_name] = target_address #in case of recursion
        target_routine.generate(output, depend_table)
        return target_address

    


@dataclass
class emission:
    cmds : typing.Any = field(default_factory=lambda: [])
    labels : typing.Any = field(default_factory=lambda: {})
    annos : typing.Any = field(default_factory=lambda: [])

    #the link header gets put at the start of the build executable.
    #it consists of 2 commands to call the main routine:
    #   call <address of main>
    #   halt
    link_header_size = 2

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

    @dataclass
    class anno:
        msg : str
        line : int

        def __str__(self):
            return self.msg

    def annotate(self, msg):
        self.annos.append(self.anno(msg, self.address()))

    def define(self, name):
        self.labels[name] = self.address()


    def __call__(self, inst, arg=None):
        cmd = emission.command(inst, arg)
        self.cmds.append(cmd)

    def address(self):
        return len(self.cmds) + self.link_header_size

    def render(self):
        buffer = []

        for line, cmd in enumerate(self.cmds):
            #annotations
            while self.annos and line == self.annos[0].line:
                msg = self.annos.pop(0).msg
                buffer.append(f'"{msg}')

            #actual content
            buffer.append(cmd.render())

        return "\n".join(buffer)

    def link(self, address):
        self.cmds.insert(0, self.command('call', address))
        self.cmds.insert(1, self.command('halt', None))

        return self.render()



    


def compile(path):
    stream = tokenize(path)
    root = ast.parse(stream)

    output = emission()


    address = root.routine(output, 'main')
    build = output.link(address)
    
    with open('build', "w") as f:
        f.write(build)



def main():
    compile(sys.argv[1])


if __name__ == "__main__":
    main()
