#include <stdio.h>

/**
 * main - Entry point
 * @void: param
 * Return: 0
 */

int main(void)
{
	long long int a;
	long long int b;
	long long int c;
	long long int temp;

	a = 0;
	b = 1;
	c = 0;

	while (c < 50)
	{
		temp = a;
		a = b;
		b = a + temp;

		printf("%lld", b);

		if (c != 49)
			printf(", ");
		c++;
	}
	printf("\n");

	return (0);
}
