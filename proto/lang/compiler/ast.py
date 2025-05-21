
from dataclasses import dataclass
import typing

@dataclass
class ast:
    nodes : list[typing.Any]

    def __iter__(self):
        return iter(self.nodes)

    def __len__(self):
        return len(self.nodes)

    def __getitem__(self, key):
        return self.nodes[key]
    


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

    
