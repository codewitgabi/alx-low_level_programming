#include <stdio.h>

/**
 * main - Entry point
 * @void: param
 * Return: 0
 */

int main(void)
{
	long int a;
	long int b;
	long int c;
	long int temp;

	a = 0;
	b = 1;
	c = 0;

	while (c < 98)
	{
		temp = a;
		a = b;
		b = a + temp;

		printf("%ld", b);

		if (c != 97)
			printf(", ");
		c++;
	}
	printf("\n");

	return (0);
}
