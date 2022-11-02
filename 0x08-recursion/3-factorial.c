#include "main.h"

/**
 * factorial - finds the factorial of a number
 * @n: number to factorise
 * Return: factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (1);

	return (factorial(n - 1) * n);
}
