#include <stdio.h>

/**
 * main - Entry point
 * @void: param
 * Return: 0
 */

int main(void)
{
	ong int a;
	long int b;
	long int c;
	long int temp;
	long int n;

	n = 0;
	a = 0;
	b = 1;
	c = 0;

	while (c < 50 && b < 3000000)
	{
		temp = a;
		a = b;
		b = a + temp;

		if (b % 2 == 0)
			n += b;
		c++;
	}
	printf("%ld\n", n);

	return (0);
}
