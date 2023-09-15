#include "main.h"
#include <stdio.h>

void print_numbers(void)
{
    int i;
    i = 0;
    while (i <= 9)
    {
        printf("%d", i);
        ++i;
    }
    printf("\n");
}
