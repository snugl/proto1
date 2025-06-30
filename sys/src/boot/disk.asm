[bits 16]
disk_load:
    push dx; save sector count

    mov ah, 0x2     ;mode: read
    mov al, dh      ;sector count
    mov ch, 0x0     ;cylinder zero
    mov dh, 0x0     ;head zero
    mov cl, 0x2     ;sector two
    
    int 0x13

    ;carry flag is set on error
    jc disk_error

    pop dx; restore
    cmp dh, al ;check if right number of sectors read
    jne disk_error

    ret

disk_error:
    mov si, DISK_ERROR_MSG
    call print_real
    jmp $

DISK_ERROR_MSG db "DISK ERROR!", 0
