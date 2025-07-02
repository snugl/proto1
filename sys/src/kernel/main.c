
#include "debug.c"
#include "fs.c"



__attribute__((section(".start")))
void kmain()
{
    screenClear();
    kprint("Kernel Lauch Success!\n");

    fsInit();

    for (;;);
}
