
#ops = ('+', '-', '|', '&', '^', '>>', '<<', '==', '!=', '<', '>', '.', '*')
binding = '~'
assign = '='
eos = ';'
param_start = '('
param_end   = ')'
block_start = '{'
block_end   = '}'

seq_constant_delim = '::'

alloc_arrow = '->'

op_add = '+'
op_sub = '-'
op_gt  = '>'
op_lt  = '<'
op_eq  = '=='
op_mul  = '*'
op_dot = '.'


ops = [
    value for name, value in
    list(globals().items()) #list() to make copy
    if name.startswith('op_')
]

