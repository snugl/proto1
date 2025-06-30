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

call load_kernel
call load_gdt
call switch_prot

jmp $


[bits 16]
load_kernel:
    mov si, LOAD_MSG
    call print_real

    mov bx, KERNEL_ADDR     ;load to kernel address
    mov dh, SECTORS_TO_LOAD ;how many sectors to load
    mov dl, [BOOT_DRIVE]    ;what drive to load from
    call disk_load

    mov si, DONE_MSG
    call print_real

    ret



%include "src/boot/print.asm"
%include "src/boot/disk.asm"
%include "src/boot/prot.asm"
%include "src/boot/gdt.asm"




;static
STACK_ADDR  equ 0x8000 ;kernel stack  address
KERNEL_ADDR equ 0x9000 ;kernel origin address
BOOT_DRIVE  db 0
SECTORS_TO_LOAD equ 15 ; 15 sectors * 65k per sector = just under 1M


;messages
START_MSG db 10, "Bootloader start!", 10, 13, 0
LOAD_MSG  db "Loading kernel... ", 0
GDT_MSG   db "Load global desciptor table... ", 0
DONE_MSG  db "DONE!", 10, 13, 0


;make bootsector valid
times 510-($-$$) db 0
dw 0xaa55 ;magic bytes
