#include "main.h"

/**
 * _puts - prints a string to stdout followed by a new line
 * @str: string to be outputted
 */

void _puts(char *str)
{
	int i, length;
	char *str2;

	length = 0;
	str2 = str;

	while (*str != '\0')
	{
		length++;
		str++;
	}

	for (i = 0; i < length; i++)
		_putchar(str2[i]);
	_putchar('\n');
}
