#include <stdio.h>
#include "hash.h"

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("\n USAGE: prog [arg1] [arg2] ...\n");
        printf(" This program uses the DJB hash function to return stdin\n");
        printf(" arguments as hash numbers. The hash function is as follows in C...\n\n");
        printf("  unsigned long hash(unsigned char *str)\n");
        printf("  {\n");
        printf("      unsigned long hash = 5381\n");
        printf("      int c;\n");
        printf("          while (c = *str++)\n");
        printf("          {\n");
        printf("              hash = hash * 33 + c;\n");
        printf("          }\n");
        printf("      return hash;\n");
        printf("  }\n\n");
    }
    for (int i = 1; i < argc; i++)
    {
        printf("%i\n", hash(argv[i]));
    }

    return 0;
}
