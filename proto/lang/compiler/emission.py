
from dataclasses import dataclass
from dataclasses import field
import typing


@dataclass
class emission:
    seq : typing.Any = field(default_factory=lambda: []) 
    addr : int = 0

    #the link header gets put at the start of the build executable.
    #it consists of 2 commands to call the main routine:
    #   call <address of main>
    #   halt
    link_header_size = 2

    @dataclass
    class command: 
        inst : str
        arg : typing.Any

        def __str__(self):
            str_arg = str(self.arg) if self.arg is not None else ''
            return f"{self.inst} {str_arg}".strip()

    @dataclass
    class label_reference:
        name : str
        routine : str
        emission : typing.Any

        def __str__(self):
            obj = emission.label_definition.find(self.emission, self.name, self.routine)
            return str(obj.address)

    @dataclass
    class label_definition:
        name : str
        routine : str
        address : int

        @staticmethod
        def find(emission_ctx, name, routine):
            for obj in emission_ctx.seq:
                if type(obj) is not emission.label_definition:
                    continue
                
                if obj.name == name and obj.routine == routine:
                    return obj

            return None


        def __str__(self):
            return f'"label {self.routine.name}.{self.name}'

    @dataclass
    class anno:
        msg : str
        line : int

        def __str__(self):
            return self.msg

    def annotate(self, msg):
        self.seq.append(self.anno(msg, self.address()))

    def define(self, name, routine):
        label = self.label_definition(
            name = name,
            routine = routine,
            address = self.address()
        )
        self.seq.append(label)


    def __call__(self, inst, arg=None):
        cmd = emission.command(inst, arg)
        self.seq.append(cmd)
        self.addr += 1

    def address(self):
        return self.addr + self.link_header_size

    def render(self):
        return "\n".join(map(str, self.seq))

    def assemble(self, address):
        self.seq.insert(0, self.command('call', address))
        self.seq.insert(1, self.command('halt', None))

        return self.render()

