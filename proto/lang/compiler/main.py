#!/usr/bin/python3

import sys
import lex
import tree
import emission
import error


entry_name = "main"

def compile(path):
    #lex and parse
    stream = lex.tokenize(path)
    root = tree.parse(stream)

    #output buffer
    output = emission.output()

    #render global constants
    root.render_constants()

    #actualy compilation
    entry = root.get_routine(entry_name)
    root.routine(output, entry)

    #verify integrety
    pcount = entry.pinter.get_space_size()
    if pcount > 0:
        error.error("Cannot bind parameter interface for entry function")

    #optimize emission
    output.optimize()

    #render ir
    build = output.assemble(entry_name)
    
    with open('build', "w") as f:
        f.write(build)



def main():
    compile(sys.argv[1])


if __name__ == "__main__":
    main()
