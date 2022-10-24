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
	a = 0;

	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';

	return (dest);
}
