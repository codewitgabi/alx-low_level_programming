#include "main.h"

/**
 * print_rev - prints a string to stdout in reverse
 * @s: string to be reversed
 */

void print_rev(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;

	for (i = i - 1; i >= 0; i--)
		_putchar(*(s + i));
	_putchar('\n');
}
