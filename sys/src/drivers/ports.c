#ifndef _PORTS
#define _PORTS

#include "../common.h"

void out8(u16 port, u8 value)
{
    asm volatile ("outb %1, %0" : : "dN" (port), "a" (value));
}

u8 in8(u16 port)
{
   u8 ret;
   asm volatile ("inb %1, %0" : "=a" (ret) : "dN" (port));
   return ret;
}

u16 in16(u16 port)
{
   u16 ret;
   asm volatile ("inw %1, %0" : "=a" (ret) : "dN" (port));
   return ret;
} 


#endif
