#include "main.h"

/**
 * print_number - prints a given number to stdout
 * @n: number to print
 */

void print_number(int n)
{
	unsigned int inc, z;

	z = n;

	if (n < 0)
	{
		_putchar('-');
		z = n * -1;
	}
	inc = 1;
	for (; z > 9; z /= 10)
		inc *= 10;

	for (; inc >= 1; inc /= 10)
		_putchar(((n / inc) % 10) + '0');
}
