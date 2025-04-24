#!/usr/bin/python3

import sys





def lex(raw):
    prog = []
    for line_raw in raw.split('\n'):
        line = line_raw.strip().replace('  ', ' ')
        if not line: continue

        comps = line.split(' ')
        inst = comps[0]
        arg  = int(comps[1]) if len(comps) > 1 else None

        prog.append((inst, arg))

    return prog


def run(prog):
     
    pc = 0
    acc = 0
    mem = [0 for _ in range(128)]
    stack = []
    running = True

    while pc < len(prog) and running:
        print(pc)
        inst, arg = prog[pc]
        pc += 1

        match inst:
            case 'const': acc = int(arg)
            case 'add':   acc += mem[arg]
            case 'sub':   acc -= mem[arg]
            case 'greater': acc = acc > mem[arg]
            case 'lesser' : acc = acc < mem[arg]
            case 'equal':   acc = acc == mem[arg]
            case 'push':  stack.append(acc)
            case 'pull':  acc = stack.pop()
            case 'load':  acc = mem[arg]
            case 'store': mem[arg] = acc
            case 'jump':  pc = arg
            case 'branch':
                if acc != 0: pc = arg
            case 'call':
                stack.append(pc)
                pc = arg
            case 'return':
                pc = stack.pop()

            case 'debug': print(acc)
            case 'halt':  running = False



def main():
    
    with open(sys.argv[1], 'r') as f:
        prog = lex(f.read())

    run(prog)

if __name__ == '__main__':
    main()
