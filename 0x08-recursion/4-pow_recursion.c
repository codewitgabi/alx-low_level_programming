#include "main.h"

/**
 * _pow_recursion - find the power of a nunber to another using recursion
 * @x: base
 * @y: index
 * Return: x raised to power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
