#include "main.h"
#include <stdio.h>

char *_strncpy(char *dest, char *src, int n)
{
    int i = 0;
    for (i; i < n; i++)
    {
        dest[i] = src[i];
    }
    return (dest);
}