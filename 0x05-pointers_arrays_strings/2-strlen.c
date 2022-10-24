#include "main.h"

/**
 * _strlen - returns the length of string s
 * @s: string to find length
 * Return: length of string
 */

int _strlen(char *s)
{
	int length;

	length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
