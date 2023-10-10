#include "main.h"
#include <stdio.h>

int _strcmp(char *s1, char *s2)
{
    int i = 0;
    if (s1 - s2 > 0)
    {
        i = s1 - s2;
        return (i);
    }
    if (s1 - s2 < 0)
    {
        i = s1 - s2;
        return (i);
    }
    else
    {
        return (i);
    }
}