[org 0x7c00]

;bring system into known state
cli
mov ax, 0
mov ds, ax
mov es, ax
mov ss, ax

;save boot drive from BIOS
mov [BOOT_DRIVE], dl

;setup bootloader stack
mov bp, 0x7000; under bootloader code
mov sp, bp

;hello world
mov si, START_MSG
call print_real

jmp $



%include "src/boot/print.asm"




;static
BOOT_DRIVE db 0


;messages
START_MSG db 10, "Bootloader start!", 10, 13, 0



;make bootsector valid
times 510-($-$$) db 0
dw 0xaa55 ;magic bytes
