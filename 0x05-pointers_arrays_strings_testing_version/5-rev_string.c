#include "main.h"
#include <stdio.h>

void rev_string(char *s)
{
    if (s == NULL)
    {
        printf("Don't pass an empty string");
    }
    int len = 0;
    while (s[len] != '\0')
    {
        len++;
    }

    char *ptr_start = s;
    char *ptr_end = s + len - 1;
    while (ptr_start < ptr_end)
    {
        char temp = *ptr_start;
        *ptr_start = *ptr_end;
        *ptr_end = temp;
        ptr_start++;
        ptr_end--;
    }
}