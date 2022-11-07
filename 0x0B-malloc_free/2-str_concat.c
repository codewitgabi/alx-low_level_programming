#include <stdlib.h>
#include "main.h"

/**
 * str_concat -  concatenates two strings.
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * Return: pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	int c = 0, i = 0, j;

	while (*(s1 + c))
		c++;
	while (*(s2 + i))
		i++;
	s3 = malloc(c + i);

	for (j = 0; j < c; j++)
		s3[j] = s1[j];

	s3[j] = '\0';

	return (s3);
}
