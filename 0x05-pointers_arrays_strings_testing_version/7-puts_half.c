#include <stdio.h>
#include "main.h"

void puts_half(char *str)
{
    int i = 0, len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    if (len % 2 == 0)
    {
        i = len / 2;
    }
    else
    {
        i = (len - 1) / 2;
    }
    while (i < len)
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}