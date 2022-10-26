#include "main.h"

/**
 * print_number - prints a given number to stdout
 * @n: number to print
 */

void print_number(int n)
{
	int count, inc, n2;

	count = 1;

	if (n < 0)
	{
		putchar('-');
		n *= -1;
	}
	for (inc = 10; n % inc < n; inc *= 10)
		count++;
	inc = inc / 10;

	while (count > 0)
	{
		putchar((n / inc) % 10 + '0');
		count--;
		inc /= 10;
	}
}
