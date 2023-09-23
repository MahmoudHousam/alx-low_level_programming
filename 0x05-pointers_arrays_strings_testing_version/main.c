#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    // 0-reset_to_98
    int n;

    n = 402;
    printf("n=%d\n", n);
    reset_to_98(&n);
    printf("n=%d\n", n);

    // 1-swap
    int a;
    int b;

    a = 98;
    b = 42;
    printf("a=%d, b=%d\n", a, b);
    swap_int(&a, &b);
    printf("a=%d, b=%d\n", a, b);

    // 2-strlen
    char *str;
    int len;

    str = "My first strlen!";
    len = _strlen(str);
    printf("%d\n", len);

    // 3-puts
    char *str1;

    str1 = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    _puts(str1);

    // 4-print_rev
    char *str2;

    str2 = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(str2);
    return (0);

    return (0);
}