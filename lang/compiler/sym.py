
#ops = ('+', '-', '|', '&', '^', '>>', '<<', '==', '!=', '<', '>', '.', '*')
binding = '~'
assign = '='
eos = ';'
param_start = '('
param_end   = ')'
block_start = '{'
block_end   = '}'

index = '@'


op_add = '+'
op_sub = '-'
op_gt  = '>'
op_lt  = '<'
op_eq  = '=='
op_neq  = '!='
op_mul  = '*'
op_dot = '.'

#precedence
prec = [
    ("<", ">", "==", "!="),
    ("+", "-"),
    ("*"),
    ("."),
]


ops = [
    value for name, value in
    list(globals().items()) #list() to make copy
    if name.startswith('op_')
]

