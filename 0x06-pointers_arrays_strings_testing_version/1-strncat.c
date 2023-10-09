#include "main.h"
#include <stdio.h>

char *_strncat(char *dest, char *src, int n)
{
    int i = 0;
    int k = 0;

    while (dest[i] != '\0')
    {
        i++;
    }
    while (src[k] != '\0')
    {
        if (k <= n)
        {
            dest[i + k] = src[k];
        }
        k++;
    }
    return (dest);
}