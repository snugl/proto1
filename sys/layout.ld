SECTIONS
{
    . = 0x9000;

    .text : { 
        *(.start)
        *(.text) 
    }

    .rodata : { *(.rodata)      }

    .data   : { *(.data)        }

    .bss    : { *(.bss COMMON)  }

    /*make sure to avoid collision with vga memory*/
    . = 0x100000;

    .fs :
    {
        PROVIDE(_fs_entry = .);
        KEEP(*(.fs))
    }

    .heap :
    {
        PROVIDE(_heap_entry = .);
        KEEP(*(.heap))
    }
}
