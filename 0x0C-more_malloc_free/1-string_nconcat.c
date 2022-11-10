#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat -  concatenates two strings.
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * @n: nunber of bytes to concatenate
 * Return: pointer to newly allocated memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i = 0, j = 0, a = 0, b = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*(s1 + i))
		i++;
	while (*(s2 + j))
		j++;

	if (n >= j)
		n = j;

	p = malloc(i + n);

	if (p == NULL)
		return (NULL);

	while (s1[a])
	{
		p[a] = s1[a];
		a++;
	}
	while (b < n)
	{
		p[a] = s2[b];
		a++;
		b++;
	}

	p[a] = '\0';

	return (p);
}
