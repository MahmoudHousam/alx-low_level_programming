#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;
    char x;

    // 0-isupper.c
    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));

    // 1-isdigit
    x = '0';
    printf("%c: %d\n", x, _isdigit(x));
    x = 'a';
    printf("%c: %d\n", x, _isdigit(x));

    // 2-mul.c
    printf("%d\n", mul(98, 1024));
    printf("%d\n", mul(-402, 4096));

    // 3-print_numbers.c
    print_numbers();

    // 4-print_most_numbers.c
    print_most_numbers();

    // 5-more_numbers.c
    more_numbers();

    // 6-print_line.c
    print_line(5);
    print_line(10);
    print_line(0);
    print_line(-5);

    // 7-print_diagonal
    print_diagonal(5);
    print_diagonal(10);
    print_diagonal(-12);

    // 8-print_square
    print_square(2);
    print_square(5);
    print_square(-3);

    // 9-print_fizz_buzz
    print_fizz_buzz();
    return (0);
}
