
import os
import struct
import argparse


NODETYPE_INVALID = 0x0
NODETYPE_DIR = 0x1
NODETYPE_FILE = 0x2


def genNode(path) -> bytes:
    if not os.path.exists(path): return b''
    is_file = os.path.isfile(path)

    if is_file:
        with open(path, 'rb') as f:
            content = f.read()

    #walk subdirs
    else:
        sub_dirs = [os.path.join(path, x) for x in os.listdir(path)]
        sub_nodes = list(map(genNode, sub_dirs))
        content = b''.join(sub_nodes)

    name = os.path.basename(path)
    print(path, name)
    kind = NODETYPE_FILE if is_file else NODETYPE_DIR
    name_bin = name.encode('ascii') + b'\0'

    content_len = len(content)

    print(f'content length: {content_len}')
    print(f'name: {name}')

    header = struct.pack(
        f'<B{len(name_bin)}sI',
        kind, name_bin, content_len
    )

    return header + content

if __name__ == '__main__':
    par = argparse.ArgumentParser(description='Static Filesystem Image generator for Snug')
    par.add_argument("host", help='host path')
    par.add_argument("-o", dest="dst", help='destination file')
    
    args = par.parse_args()
    out = genNode(args.host)
    
    dst = args.dst if args.dst else "fs.bin"
    with open(dst, "wb") as f:
        f.write(out)
    
    

