#include "main.h"

/**
 * _strncpy - copies src into dest and characters must
 * be equal to n.
 * @dest: string to be copied into
 * @src: string to be copied from
 * @n: number of characters to be copied
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(dest + i) && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	return (dest);
}
