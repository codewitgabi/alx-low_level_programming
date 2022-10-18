#include "main.h"

/**
 * _abs - func to find absolute value of a number
 * @n: param
 * Return: absolute value of n
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
