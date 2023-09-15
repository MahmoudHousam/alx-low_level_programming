#include "main.h"
#include <stdio.h>

void print_line(int n)
{
    char c[] = "_";
    int i;

    for (i = 0; i < n; ++i)
    {
        printf("%s", c);
    }
    printf("\n");
}
