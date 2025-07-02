#ifndef _FS
#define _FS

#include "../common.h"
#include "debug.c"



extern void _binary_target_fs_bin_start;
const u8* _fs_entry = &_binary_target_fs_bin_start;


void fsInit()
{
    kprint("_fs_entry: %x\n", _fs_entry);
}




#endif
