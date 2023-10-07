#include "main.h"

void swap_int(int *a, int *b)
{
    int *temporary_ptr;

    *temporary_ptr = *a;
    *a = *b;
    *b = *temporary_ptr;
}