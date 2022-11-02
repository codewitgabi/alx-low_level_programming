#include "main.h"

/**
 * puts2 - function to prknt every other character starting
 * with the first
 * @str: string to print
 */

void puts2(char *str)
{
	int i, len = 0;
	char *s2 = str;

	while (*(s + len))
		len++;

	for (i = 0; i < len; i += 2)
		_putchar(s2[i]);
	_putchar('\n');
}
