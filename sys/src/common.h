#ifndef _COMMON
#define _COMMON

typedef unsigned int   u32;
typedef          int   s32;
typedef unsigned short u16;
typedef          short s16;
typedef unsigned char  u8;
typedef          char  s8;

#define NULL 0x0


#define bool u8
#define true 1
#define false 0


void memcpy(u8* dst, const u8* src, u32 n)
{
    for (u32 i = 0; i < n; i++)
        dst[i] = src[i];
}

void memset(u8* dst, u8 val, u32 n)
{
	for (u32 i = 0; i < n; i++)
		dst[i] = val;	
}

//check if to strings are equal
bool strequ(const char* s1, const char* s2)
{
	int i;
	for (i = 0; s1[i] && s2[i]; i++)
		if (s1[i] != s2[i]) return false;
	
	return !(s1[i] || s2[i]);	
}

u32 strlen(const char* s)
{	
	u32 i = 0;
	while (s[i]) i++;
	return i;
}


#define PANIC(msg) panic(msg, __FILE__, __LINE__);
#define ASSERT(x) ((x) ? (void)0 : assert(__FILE__, __LINE__, #x));


extern void panic(const char* msg, const char* file, u32 line)
{
    //we've encountered a massive problem and have to stop
    asm volatile("cli"); //disable interrupts

	//printf("PANIC(%s) at %s:%d\n", msg, file, line);
    for(;;) asm volatile("hlt");
}

extern void assert(const char* file, u32 line, const char* assert)
{
    asm volatile("cli");

	//printf("ASSERT(%s) at %s:%d\n", assert, file, line);
    for(;;) asm volatile("hlt");	
}

#endif




