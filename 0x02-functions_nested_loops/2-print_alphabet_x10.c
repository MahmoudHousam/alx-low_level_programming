#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int k;
	char r;

	for (k = 0; k < 10; k++)
	{
		for (r = 'a'; r <= 'z'; r++)
			_putchar(r);
		_putchar('\n');
	}
}
