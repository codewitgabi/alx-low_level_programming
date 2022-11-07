#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - allocates a 2D array as a pointer to memory
 * @height: number of rows
 * @width: number of colunns
 * Return: pointer to aray
 */

int **alloc_grid(int width, int height)
{
	int **array, i, j;

	array = malloc(sizeof(*array) * height);

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(**array) * width);
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}

	return (array);
}
