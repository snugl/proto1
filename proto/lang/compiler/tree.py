
from dataclasses import dataclass
from dataclasses import field
import typing

import objs
import sys



@dataclass
class node:
    #subs : typing.Any = field(default_factory=lambda: {})
    subs : typing.Any = field(default_factory=lambda: [])

    def __iter__(self):
        return iter(self.subs)

    def __len__(self):
        return len(self.subs)

    def __getitem__(self, key):
        return self.subs[key]


    def get(self, name):
        for sub in self.subs:
            if sub.name == name:
                return sub

        sys.exit(1)


    def routine(self, output, target):
        #collect and emit dependencies of routine
        for node in target.nodes:
            if type(node) is not objs._sub:
                continue 

            depend = self.get(node.target)
            if target.name == depend.name: #recursion
                continue

            self.routine(output, depend)

        target.generate(output, self)
        return target

    
def parse(stream):
    root = node()

    while stream.has() and stream.peek() != '}':
        iden = stream.pop()

        name = f"_{iden}"
        sub = getattr(objs, name).parse(stream)
        if iden != "rout":
            stream.expect(";")

        root.subs.append(sub)

    return root
