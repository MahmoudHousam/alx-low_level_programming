#include <stdio.h>
#include "main.h"

char *string_toupper(char *n)
{
    int i = 0;
    for (i; n[i] != '\0'; i++)
    {
        if (n[i] >= 97 && n[i] <= 122)
        {
            n[i] -= 32;
        }
    }
    return (n);
}