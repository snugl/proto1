#ifndef _HEAP
#define _HEAP

#include "../common.h"
#include "debug.c"



typedef struct _heap_block
{
    struct _heap_block* next;
    struct _heap_block* prev;
    u16 size;
} heap_block_t;
const u32 _heap_block_size = sizeof(struct _heap_block);


heap_block_t __attribute__((section(".heap"))) _heap_entry;
heap_block_t* _heap_head = &_heap_entry;

void heapInit()
{
    _heap_head->next = NULL;
    _heap_head->size = _heap_block_size;
}


void* heapAlloc(u32 data_size)
{
    u32 block_size = data_size + _heap_block_size;

    heap_block_t* walker = _heap_head;
    while (walker->next)
    {
        u32 to_next_block = walker->next - walker;
        u32 space = to_next_block - walker->size;

        if (space >= block_size) break;

        walker = walker->next;
    }

    //now, either a space of matching size has been found, 
    //or the last block has been reached

    heap_block_t* new = walker + walker->size;
    new->next = NULL;
    new->size = block_size;

    if (walker->next) //block has been found
    {
        //relative to new block
        heap_block_t* prev = walker;
        heap_block_t* next = walker->next;

        //┌────┐  ┌───┐  ┌────┐
        //│Prev│=>│New│=>│Next│
        //└────┘  └───┘  └────┘
        prev->next = new;
        new->next = next;


        //┌────┐  ┌───┐  ┌────┐
        //│Prev│<=│New│<=│Next│
        //└────┘  └───┘  └────┘
        new->prev = prev;
        next->prev = new;
    }
    else //end has been reached
    {
        walker->next = new;
        new->prev = walker;
    }

    void* ptr = ((void*)new) + _heap_block_size;
    return ptr;
}



void heapFree(void* ptr)
{
    heap_block_t* block = (heap_block_t*)(ptr - _heap_block_size);

    //just unlink block,
    //that's all you gotta do.
    
    heap_block_t* prev = block->prev;
    heap_block_t* next = block->next;
    
    // ┌────┐   ┌────┐
    // │Prev│<=>│Next│
    // └────┘   └────┘
    //     ┌─────┐
    //     │Block│ <- (very lonely)
    //     └─────┘
    if (true) prev->next = next;
    if (next) next->prev = prev;
}








#endif

