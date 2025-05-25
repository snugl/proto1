
import sys

def path_line_error(path, line, msg):
    print(f"Error at {path}:{line}\n\t{msg}")
    sys.exit(1)


def error(msg):
    print(f"Error\n\t{msg}")
    sys.exit(1)


def stream_error(stream, msg):
    print(f"Error at {stream.last_token.path}:{stream.last_token.line}\n\t{msg}")
    sys.exit(1)

