#include <stdio.h>
#include "main.h"

int _pow_recursion(int x, int y)
{
    int a;
    a = x;
    if (y < 0)
    {
        return (-1);
    }
    if (y == 0)
    {
        return (1);
    }
    // while (y > 1)
    // {
    //     x = x * a;
    //     y--;
    // }
    return (x * _pow_recursion(x, (y - 1)));
}