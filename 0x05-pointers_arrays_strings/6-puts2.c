#include "main.h"

/**
 * puts2 - function to prknt every other character starting
 * with the first
 * @str: string to print
 */

void puts2(char *str)
{
	int i;

	for (i = 0; *(str + i + 1); i += 2)
		_putchar(*(str + i));
	_putchar('\n');
}
