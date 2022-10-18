#include "main.h"

/**
 * main - Entry point
 * @void: parameter
 * Return: 0
 */

int main(void)
{
	int r;

	r = print_sign(98);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	r = print_sign(0);
	_putchar(',');
	_putchar(r + '0');
	r = print_sign(-6);
	_putchar(',');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
