#include "main.h"

/**
 * print_rev - prints a string to stdout in reverse
 * @s: string to be reversed
 */

void print_rev(char *s)
{
	int i, length;
	char *str2;

	length = 0;
	str2 = s;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	for (i = length - 1; i >= 0; i--)
		_putchar(str2[i]);
	_putchar('\n');
}
