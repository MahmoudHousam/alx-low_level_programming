#include "main.h"
#include <stdio.h>

void print_triangle(int n)
{
    int a, b, c;

    for (a = 1; a <= n; a++)
    {
        for (b = n - a; b > 0; b--)
        {
            printf(" ");
        }
        for (c = 0; c <= a; c++)
        {
            printf("#");
        }
        printf("\n");
    }
}