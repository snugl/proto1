
#include "debug.c"

__attribute__((section(".start")))
void kmain()
{
    
    screenClear();
    kprint("Kernel Lauch Success!\n");


    for (;;);
}
