#include "main.h"
#include <stdio.h>

void print_rev(char *str)
{
    int i;
    int len;
    len = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        len++;
    }

    while (len >= 0)
    {
        printf("%c", str[len]);
        len--;
    }
    printf("\n");
}