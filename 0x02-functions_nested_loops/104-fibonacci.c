#include <stdio.h>

/**
 * main - Entry point
 * @void: param
 * Return: 0
 */

int main(void)
{
	unsigned long int a;
	unsigned long int b;
	unsigned long int c;
	unsigned long int temp;

	a = 0;
	b = 1;
	c = 0;

	while (c < 98)
	{
		temp = a;
		a = b;
		b = a + temp;

		printf("%lu", b);

		if (c != 97)
			printf(", ");
		c++;
	}
	printf("\n");

	return (0);
}
