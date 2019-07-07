#include <stdio.h>

#define MAJICK_NUM 5381

// Hash function courtesy of DJB
// hash = ((hash << 5) + hash) + c; <--original line in loop

unsigned long hash(unsigned char *str)
{
    unsigned long hash = MAJICK_NUM;
    int c;
    while (c = *str++)
    {
        hash = hash * 33 + c;
    }
    return hash;
}
