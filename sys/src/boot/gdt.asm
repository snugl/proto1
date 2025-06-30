
[bits 16]
load_gdt:
    mov si, GDT_MSG
    call print_real

    ;load gdt
    cli
    lgdt [gdt_descriptor]

    mov si, DONE_MSG
    call print_real

    ret






gdt_start:

gdt_null:
    dd 0x0
    dd 0x0

;code and data segments overlap, both about 1 meg

gdt_code:
  dw 0x18 ;limit + 24, to make it more than 1M
  dw 0x0
  db 0x0
  db 10011010b ;access control, present + no system + code segment + read write
  db 11001111b ;flags + BIG limit
  db 0x0

gdt_data:
  dw 0x18 ;limit +  24, to make it more than 1M
  dw 0x0
  db 0x0
  db 10010010b ;access control, present + no system + read write
  db 11001111b ;flags + BIG limit
  db 0x0

gdt_end:


gdt_descriptor:
  dw gdt_end - gdt_start - 1
  dd gdt_start


CODE_SEG equ gdt_code - gdt_start
DATA_SEG equ gdt_data - gdt_start
