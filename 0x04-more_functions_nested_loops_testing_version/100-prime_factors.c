#include "main.h"
#include <stdio.h>

int main(void)
{
    unsigned long n;
    int i;
    int k;
    n = 1024;
    k = 2;
    for (i = 1; i <= n; i++)
    {
        if (n % k != 0)
        {
            k++;
        }
        else
        {
            n = n / k;
        }
    }
    printf("final value of n: %lu", n);
    printf("\n");
    return (0);
}