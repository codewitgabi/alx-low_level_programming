#include "main.h"

/**
 * reverse_array - reverses an array in place
 * @a: array to reverse
 * @n: length of array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int temp, i, mid;

	i = n;
	mid = (n - 1) / 2;

	for (i = mid; i >= 0; i--)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
