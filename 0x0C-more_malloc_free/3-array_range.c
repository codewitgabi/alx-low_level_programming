#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: start from
 * @max: stop at
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	char *p;
	int a, i;

	if (min > max)
		return (NULL);

	a = (max - min) + 1;
	p = malloc(sizeof(int) * a);

	if (p == NULL)
		return (NULL);
}
