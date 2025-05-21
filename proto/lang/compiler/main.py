#!/usr/bin/python3

import sys


def compile(path):
    stream = tokenize(path)
    root = ast.parse(stream)

    output = emission()

    address = root.routine(output, 'main')
    build = output.assemble(address)
    
    with open('build', "w") as f:
        f.write(build)



def main():
    compile(sys.argv[1])


if __name__ == "__main__":
    main()
