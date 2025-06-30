
[bits 16]
switch_prot:
    mov si, PROT_MSG
    call print_real

    ;switch A20
    mov eax, cr0
    or eax, 0x1
    mov cr0, eax

    ;jump into 32 bit
    jmp CODE_SEG:init_prot


PROT_MSG  db "Switching into protected mode... ", 10, "See you on the other side!", 0


[bits 32]
init_prot:
    ;point segment registers into gdt
    mov ax, DATA_SEG
    mov ds, ax
    mov ss, ax

    ;setup new stack in data segment
    mov ebp, STACK_ADDR
    mov esp, ebp

    call KERNEL_ADDR

    jmp $
