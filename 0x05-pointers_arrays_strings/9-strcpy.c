#include "main.h"

/**
 * *_strcpy - function to copy a string into another string
 * @dest: string to be copied into
 * @src: string tp be copied from
 * Return: copied string
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a]; a++)
		dest[a] = src[a];

	dest[a] = '\0';

	return (dest);
}
