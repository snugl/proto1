
from dataclasses import dataclass
import typing

import objs


@dataclass
class node:
    subs : list[typing.Any]

    def __iter__(self):
        return iter(self.subs)

    def __len__(self):
        return len(self.subs)

    def __getitem__(self, key):
        return self.subs[key]


    def routine(self, output, target_name):
        target_routine = [
            x for x in self.subs 
            if x.name == target_name
        ][0]

        #collect and emit dependencies of routine
        depend_table = {}
        for node in target_routine.nodes:
            if type(node) is objs._sub:
                depend_name = node.target
                if depend_name == target_name: #recursion
                    continue

                depend_table[depend_name] = self.routine(output, depend_name)

        target_address = output.address()
        depend_table[target_name] = target_address #in case of recursion
        target_routine.generate(output, depend_table)
        return target_address

    
def parse(stream):
    subs = []

    while stream.has() and stream.peek() != '}':
        word = stream.pop()

        name = f"_{word}"
        sub = getattr(objs, name).parse(stream)
        if word != "rout":
            stream.expect(";")

        subs.append(sub)

    return node(subs)
