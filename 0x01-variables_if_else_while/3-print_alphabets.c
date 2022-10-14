#include <stdio.h>

/**
 * main - Entry point
 * @void: parameter
 * Return: 0 (success)
 */

int main(void)
{
	for (int i = 97; i < 123; i++)
	{
		putchar(i);
	}
	for (int j = 65; j < 91; j++)
	{
		putchar(j);
	}
	putchar(10);

	return (0);
}
