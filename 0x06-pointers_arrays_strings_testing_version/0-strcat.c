#include "main.h"
#include <stdio.h>

char *_strcat(char *dest, char *src)
{
    int i = 0;
    int k = 0;

    while (dest[i] != '\0')
    {
        i++;
    }
    while (src[k] != '\0')
    {
        dest[i + k] = src[k];
        k++;
    }
    return (dest);
}