#include "main.h"

/**
 * print_sign - function name
 * @n: param
 * Return: 0 for +, 0 for 0 and -1 for -
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
