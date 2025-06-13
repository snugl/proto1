
from dataclasses import dataclass
from dataclasses import field
import typing

import objs
import sym
import error
import lex



@dataclass
class node:
    subs   : typing.Any = field(default_factory=lambda: [])
    consts : typing.Any = field(default_factory=lambda: {})
    

    def __iter__(self):
        return iter(self.subs)

    def __len__(self):
        return len(self.subs)

    def __getitem__(self, key):
        return self.subs[key]

    def inject(self, other):
        self.subs += other.subs
        self.consts.update(other.consts)


    def expand(self):
        for sub in self.subs:
            if type(sub) is objs._use:
                sub.expand(self)

    def get_routine(self, name):
        for sub in self.subs:
            if sub is None: continue
            if type(sub) is not objs._rout: continue
            if sub.name == name:
                return sub

        error.error(f"Unable to resolve routine name: {name}")


    #only applies to root.
    #so all root tree scopes should contain consts,
    #making them accessable to local compilation context objs._rout._ctx
    def render_constants(self):
        for sub in self.subs:
            if type(sub) is not objs._seq:
                continue

            self.consts.update(sub.render_constants())

            

    def generate(self, output, target):
        #collect and emit dependencies of routine
        for node in target.nodes:
            if type(node) is not objs._sub:
                continue 

            depend = self.get_routine(node.target)
            if target.name == depend.name: #recursion
                continue

            self.generate(output, depend)

        target.generate(output, self)
        return target

    
def parse(stream):
    root = node()

    while stream.has() and stream.peek() != '}':
        iden = stream.pop()
        name = f"_{iden}"

        if not hasattr(objs, name):
            error.stream_error(stream, f"Invalid statement name: {iden}")

        sub = getattr(objs, name).parse(stream)
        if iden not in ("rout", "seq"):
            stream.expect(sym.eos)

        root.subs.append(sub)

    return root



#lex, parse, expand imports
def prepare(path):
    stream = lex.tokenize(path)
    root = parse(stream)

    root.render_constants()
    root.expand()


    return root
