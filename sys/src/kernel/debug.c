#ifndef _DEBUG
#define _DEBUG

#include "../common.h"
#include "../drivers/screen.c"







//--- nasty varg stuff --- 
typedef char *va_list;

/* Amount of space required in an argument list for an arg of type TYPE.
   TYPE may alternatively be an expression whose type is used.  */

#define __va_rounded_size(TYPE)  \
  (((sizeof (TYPE) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))

#ifndef __sparc__
#define va_start(AP, LASTARG) 						\
 (AP = ((char *) &(LASTARG) + __va_rounded_size (LASTARG)))
#else
#define va_start(AP, LASTARG) 						\
 (__builtin_saveregs (),						\
  AP = ((char *) &(LASTARG) + __va_rounded_size (LASTARG)))
#endif

void va_done (va_list);		/* Defined in gnulib */
#define va_done(AP)

#define va_arg(AP, TYPE)						\
 (AP += __va_rounded_size (TYPE),					\
  *((TYPE *) (AP - __va_rounded_size (TYPE))))










#define abs(x) (x < 0 ? -x : x)

char* convert(u32 num, s32 base) 
{ 
    char const digits[]= "0123456789ABCDEF";
    static char buffer[50]; 
    char *ptr; 

    ptr = buffer + 49; 
    *ptr = '\0'; 

    do 
    { 
        *(--ptr) = digits[num%base]; 
        num /= base; 
    }
	while (num); 

    return ptr; 
}

void kprint(char* format, ...) 
{ 
    u32 i; 
    char *s; 

    va_list arg;
    va_start(arg, format); 

    for(char* iter = format; *iter != '\0'; iter++) 
    { 
		if (*iter != '%')
		{
			screenPut(*iter);
			continue;
		}

        iter++; 
		
        switch(*iter) 
        { 
            case 'c':
                screenPut(va_arg(arg, int));
                break;

            case 'd': 
				i = va_arg(arg, int);
                if (i < 0) 
                    screenPut('-'); 
				
				s = convert(abs(i), 10);
                screenWrite(s);
                break; 

            case 'o': 
				i = va_arg(arg, unsigned int);
                screenWrite(convert(i, 8));
                break; 

            case 's': 
                screenWrite(va_arg(arg, char *)); 
                break; 

            case 'x': 
				i = va_arg(arg, unsigned int);
                screenWrite(convert(i, 16));
                break; 
        }   
    } 

    va_done(arg); 
} 







#endif
