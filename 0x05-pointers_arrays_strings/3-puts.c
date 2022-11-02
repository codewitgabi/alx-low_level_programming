#include "main.h"

/**
 * _puts - prints a string to stdout followed by a new line
 * @str: string to be outputted
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
