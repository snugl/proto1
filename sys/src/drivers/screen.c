#ifndef _SCREEN
#define _SCREEN

#include "../common.h"
#include "ports.c"

#define VGAAddress 0xB8000
#define VGARowLimit 25
#define VGAColLimit 80
#define VGAScreenSize (VGAColLimit * VGARowLimit)

#define WhiteOnBlack 0x0f

#define VGAConReg 0x3d4
#define VGADatReg 0x3d5

#define renderVidMem(x,y) (short)(x + (y << 8))

#define VGAPosNL(x) (((x) / VGAColLimit + 1) * VGAColLimit)


u16* const vidMem = (u16*)VGAAddress;
static u32 cursorPos = 0; //index into VGA video memory, index to cell, not to byte


void memset16(u16* base, u16 data, u32 len)
{
    for (u32 i = 0; i < len; i++)
        base[i] = data;
}



void setCursorPos()
{
    out8(VGAConReg, 14);
    out8(VGADatReg, (u8)(cursorPos >> 8));
    out8(VGAConReg, 15);
    out8(VGADatReg, (u8)(cursorPos & 0xff));    
}

//scolls all of video memory by one row
void scroll()
{
    const u32 VGALastRow = VGAScreenSize - VGAColLimit;
    
    //delete first row
    memset16(vidMem, renderVidMem(' ', WhiteOnBlack), VGAColLimit);
    
    //copy back all of vidMem, hopfully	
    memcpy((u8*)vidMem, (u8*)(vidMem + VGAColLimit), VGALastRow * sizeof(vidMem));
    
    //delete last row
    memset16(vidMem + VGALastRow, renderVidMem(' ', WhiteOnBlack), VGAColLimit);
}


//--- public functions ---

//print data and attr into video memory at offset, returns new offset of cursor
void screenPut(char c)
{
    if (c == '\n')
        cursorPos = VGAPosNL(cursorPos);
    else
        vidMem[cursorPos++] = renderVidMem(c, WhiteOnBlack);


    //check if new offset overflows screen, then scroll
    if (cursorPos >= VGAScreenSize)
    {
        scroll();        
        cursorPos -= VGAColLimit; //scroll cursor to newline
    }

    setCursorPos();	
}


void screenWrite(char* str)
{
	for (u32 i = 0; str[i]; i++)
		screenPut(str[i]);
}

void screenClear()
{
    //iterate video memory and set 
    memset16(vidMem, renderVidMem(' ', WhiteOnBlack), VGAScreenSize);
    
	cursorPos = 0;
    setCursorPos();
}





#endif
