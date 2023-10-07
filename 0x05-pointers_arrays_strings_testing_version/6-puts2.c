#include "main.h"
#include <stdio.h>

void puts2(char *str)
{
    int i = 0, len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    while (i < len)
    {
        printf("%c", str[i]);
        i = i + 2;
    }
    printf("\n");
}