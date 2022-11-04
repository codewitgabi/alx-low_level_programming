#include "main.h"

/**
 * puts - prints a string to stdout
 * @s: string to print
 */

void _puts(char *s)
{
	while (*s)
	{
		_putchar(*(s + 1));
		s++;
	}
	_putchar('\n');
}
