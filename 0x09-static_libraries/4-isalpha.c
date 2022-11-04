#include "main.h"

/**
 * _isalpha - checks if a character is an alphabet
 * @c: param
 * Return: 0
 */

int _isalpha(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
