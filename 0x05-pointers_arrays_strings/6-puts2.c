#include "main.h"

/**
 * puts2 - function to prknt every other character starting
 * with the first
 * @str: string to print
 */

void puts2(char *str)
{
	int len, i;
	char *s2;

	len = 0;
	s2 = str;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	for (i = 0; i < len; i += 2)
		_putchar(s2[i]);
	_putchar('\n');
}
