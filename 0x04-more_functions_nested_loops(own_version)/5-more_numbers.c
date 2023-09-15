#include "main.h"
#include <stdio.h>

void more_numbers(void)
{
    int i, c;
    c = 0;
    while (c < 10)
    {
        for (i = 0; i <= 14; ++i)
        {
            printf("%d", i);
        }
        printf("\n");
        ++c;
    }
}
