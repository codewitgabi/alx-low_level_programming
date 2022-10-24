#include "main.h"

/**
 * rev_string - prints a string to stdout in reverse
 * @s: string to be reversed
 */

void rev_string(char *s)
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

	for (i = length; i >= 0; i--)
		_putchar(str2[i]);
	_putchar('\n');
}
