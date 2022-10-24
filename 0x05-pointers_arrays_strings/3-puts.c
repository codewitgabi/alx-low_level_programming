#include "main.h"

/**
 * _puts - prints a string to stdout followed by a new line
 * @str: string to be outputted
 */

void _puts(char *str)
{
	int i;

	for (i = 0; i <= 63; i++)
		_putchar(str[i]);
	_putchar('\n');
}
