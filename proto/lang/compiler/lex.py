
from dataclasses import dataclass
from dataclasses import field

import sys


@dataclass
class token:
    content : str = ""
    line    : int = 0
    path    : str = ""

    def __str__(self):
        return self.content



def get_kind(char):
    match char:
        case '"':               return 'comment'
        case x if x.isalpha():  return 'iden' 
        case x if x.isdigit():  return 'iden'
        case ":"             :  return 'iden' #colon is part of identifier scoping
        case ';':               return 'eos'
        case ',':               return 'delim'
        case '\n':              return 'newline'
        case ' ':               return 'space'
        case _:                 return 'symbol'


@dataclass
class stream:
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

def tokenize(path):
    with open(path, "r") as f:
        raw = f.read()

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

    return stream(token_buffer)

