#include <unistd.h>

/**
 * _putchar - prints a character to stdout
 * @c: param
 * Return: int
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
