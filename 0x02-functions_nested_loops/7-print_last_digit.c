#include "main.h"

/**
 * print_last_digit - function to print last digut of a number
 * @n: param
 * Return: int
 */

int print_last_digit(int n)
{
	_putchar(n > 1 ? n % 10 + 48 : (n * -1) % 10 + 48);
	return (n > 1 ? n % 10 : (n * -1) % 10);
}
