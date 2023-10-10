#include "main.h"
#include <stdio.h>

void reverse_array(int *a, int n)
{
    int i;
    int r;

    for (i = 0; i < n / 2; i++)
    {
        r = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = r;
    }
}