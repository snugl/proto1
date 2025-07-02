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

    .fs :
    {
        KEEP(target/fs.o(.fs))
    }

    .heap : {
        KEEP(*(.heap))
    }
}
