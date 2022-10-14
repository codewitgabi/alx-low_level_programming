#include <stdio.h>

/**
 * main - Entry point
 * @void: parameter
 * Return: 0 (success)
 */

int main(void)
{
	for (int i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (int j = 97; j < 103; j++)
	{
		putchar(j);
	}
	putchar(10);

	return (0);
}
