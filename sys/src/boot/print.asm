[bits 16]

print_real:
    pusha

print_real_loop:
    cmp byte [si], 0
    je print_real_done

    mov al, [si]
    mov ah, 0x0e
    int 0x10

    inc si

    jmp print_real_loop

print_real_done:
    popa
    ret
