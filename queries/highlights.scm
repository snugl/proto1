(variable (iden) @variable) 
(string) @string
(number) @number


(param_name (iden) @parameter)
(rout_name  (iden) @function)
(label      (iden) @label)

(seq_name   (iden) @type)
(seq_entry  (iden) @constant)

"rout"    @keyword
"seq"     @keyword
"put"     @keyword
"sub"     @keyword
"lab"     @keyword
"jump"    @keyword
"trans"   @keyword
"pers"    @keyword
"debug"   @keyword

"use"     @include


"+"  @operator
"-"  @operator
"="  @operator

">"  @conditional
"<"  @conditional


(eos) @punctuation
(comment) @comment @spell
