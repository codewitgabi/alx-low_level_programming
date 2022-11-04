#include "main.h"

/**
 * _islower - checks if a number is in lowercase
 * @c: character
 * Return: 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
