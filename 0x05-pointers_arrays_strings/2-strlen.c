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

	while (s[length] != '\0')
		length++;

	return (length);
}
