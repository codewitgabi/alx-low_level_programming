#include "main.h"

/**
 * _strcat - concatenates two string
 * @dest: the string on the left of ens result
 * @src: the string on the right of end result
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	j = 0;

	while (dest[j] != '\0')
		j++;
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[j] = src[i];
		j++;
	}
	dest[j] = '\0';

	return (dest);
}
