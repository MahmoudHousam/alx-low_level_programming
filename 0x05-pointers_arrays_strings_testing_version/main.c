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
    printf("\n0-reset_to_98\n");
    int n;

    n = 402;
    printf("n=%d\n", n);
    reset_to_98(&n);
    printf("n=%d\n", n);

    // 1-swap
    printf("\n1-swap\n");
    int a;
    int b;

    a = 98;
    b = 42;
    printf("a=%d, b=%d\n", a, b);
    swap_int(&a, &b);
    printf("a=%d, b=%d\n", a, b);

    // 2-strlen
    printf("\n2-strlen\n");
    char *str;
    int len;

    str = "My first strlen!";
    len = _strlen(str);
    printf("%d\n", len);

    // 3-puts
    printf("\n3-puts\n");
    char *str1;

    str1 = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    _puts(str1);

    // 4-print_rev
    printf("\n4-print_rev\n");
    char *str2;

    str2 = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(str2);

    // 5-rev_string
    printf("\n5-rev-string\n");
    char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);

    // 6-puts2
    printf("\n6-puts2\n");
    char *str3;

    str3 = "My Name is 7oda";
    puts2(str3);

    // 7-puts_half.c
    printf("\n7-puts_half\n");
    char *str4;
    char *str5;

    str4 = "0123456789";
    str5 = "01234567891";
    puts_half(str4);
    puts_half(str5);
    return (0);
}