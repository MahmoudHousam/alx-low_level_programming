#include "main.h"
#include <stdio.h>

void print_square(int n)
{
    char c[] = "#";
    int i;
    int k;

    if (n > 0)
    {
        for (i = 0; i < n; ++i)
        {
            for (k = 0; k < n; ++k)
            {
                printf("%s", c);
            }
            printf("\n");
        }
        // printf("\n");
    }
    else
    {
        printf("%d is less than or equal to 0", n);
    }
    printf("\n");
}
