#include "main.h"
#include <stdio.h>

char *_strcpy(char *dest, char *src)
{
    int i = 0, len = 0;

    while (src[len] != '\0')
    {
        len++;
    }
    for (i; i < len; i++)
    {
        dest[i] = src[i];
    }
    return dest;
}