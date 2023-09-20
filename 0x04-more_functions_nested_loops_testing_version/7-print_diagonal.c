#include "main.h"
#include <stdio.h>

void print_diagonal(int n)
{
    char c[] = "\\";
    int i;

    if (n > 0)
    {
        for (i = 0; i < n; ++i)
        {
            printf("%s", c);
        }
    }
    else
    {
        printf("%d is less than or equal to 0", n);
    }
    printf("\n");
}
