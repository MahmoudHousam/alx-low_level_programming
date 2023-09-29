#include <stdio.h>
#include "main.h"

int check_prime(int n, int x)
{
    if (n <= 1 || n != x && n % x == 0)
    {
        return (0);
    }
    else if (n == x)
    {
        return (1);
    }
    return (check_prime(n, x + 1));
}

int is_prime_number(int n)
{
    return (check_prime(n, 2));
}