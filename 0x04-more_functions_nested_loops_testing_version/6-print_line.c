#include "main.h"
#include <stdio.h>

void print_line(int n)
{
    char c[] = "_";
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
        printf("%d is less than or eqal to 0", n);
    }
    printf("\n");
}
