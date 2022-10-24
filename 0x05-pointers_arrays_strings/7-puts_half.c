#include "main.h"

/**
 * puts_half - Prints the second half of the string
 * @str: string to print
 */

void puts_half(char *str)
{
	int len, i, mid;
	char *s2;

	s2 = str;
	len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	mid = (len % 2 == 0) ? (len / 2) : (len - 1) / 2;

	for (i = mid; i <= len; i++)
		_putchar(s2[i]);
	_putchar('\n');
}
