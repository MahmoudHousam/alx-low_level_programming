#include "main.h"
#include <stdio.h>

void print_most_numbers(void)
{
    int i;
    for (i = 0; i <= 9; ++i)
    {
        if (i != 2 && i != 9)
        {
            printf("%d", i);
        }
    }
    printf("\n");
}
