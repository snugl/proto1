#!/usr/bin/python3

import sys
import tree
import emission
import error


entry_name = "main"

def compile(path):
    #lex, parse, expand imports
    root = tree.prepare(path)

    #output buffer
    output = emission.output()

    #actual compilation
    entry = root.get_routine(entry_name)
    root.generate_routine(output, entry)

    #verify integrety
    pcount = entry.pinter.get_space_size()
    if pcount > 0:
        error.error("Cannot bind parameter interface for entry function")

    #optimize emission
    output.optimize()

    #render ir
    entry_origin = root.lookup_routine_origin(entry_name)
    build = output.assemble(entry_origin)
    
    with open('build', "w") as f:
        f.write(build)



def main():
    compile(sys.argv[1])


if __name__ == "__main__":
    main()
