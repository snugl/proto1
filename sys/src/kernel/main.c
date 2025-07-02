
#include "debug.c"
#include "heap.c"

__attribute__((section(".start")))
void kmain()
{
    screenClear();
    kprint("Kernel Lauch Success!\n");

    heapInit();

    u8* a = heapAlloc(10);
    u8* b = heapAlloc(10);
    u8* c = heapAlloc(10);

    kprint("a: %x\n", a);
    kprint("b: %x\n", b);
    kprint("c: %x\n", c);

    heapFree(a);
    heapFree(b);

    a = heapAlloc(10);
    b = heapAlloc(10);
    u8* d = heapAlloc(10);
    kprint("a: %x\n", a);
    kprint("a: %x\n", b);
    kprint("a: %x\n", d);


    for (;;);
}
