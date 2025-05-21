#!/usr/bin/python3

import sys
import lex
import tree
import emission


def compile(path):
    stream = lex.tokenize(path)
    root = tree.parse(stream)

    output = emission.output()

    address = root.routine(output, 'main')
    build = output.assemble(address)
    
    with open('build', "w") as f:
        f.write(build)



def main():
    compile(sys.argv[1])


if __name__ == "__main__":
    main()
