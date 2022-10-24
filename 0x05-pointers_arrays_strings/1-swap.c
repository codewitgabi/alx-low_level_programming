#include "main.h"

/**
 * swap_int - swap two integers
 * @a: first nunber
 * @b: second nunber
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
