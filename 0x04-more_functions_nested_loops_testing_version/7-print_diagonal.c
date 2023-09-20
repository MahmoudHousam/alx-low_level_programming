#include "main.h"
#include <stdio.h>

void print_diagonal(int n)
{
    char c[] = "\\";
    int i;

    for (i = 0; i < n; ++i)
    {
        printf("%s", c);
    }
    printf("\n");
}
