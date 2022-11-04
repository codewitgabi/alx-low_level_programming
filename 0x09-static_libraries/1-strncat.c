#include "main.h"

/**
 * _strncat - concatenates two string upto to n
 * @dest: char on the left after concatenation
 * @src: char on the right after concatenation
 * @n: number of characters to concatenate
 * Return: pointer to dest
 */


char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	j = 0;

	while (dest[j] != '\0')
		j++;
	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[j] = src[i];
		j++;
	}
	dest[j] = '\0';

	return (dest);
}
