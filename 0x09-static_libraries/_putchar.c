#include <unistd.h>

/**
 * _putchar - lrints to stdout
 * @c: param
 * Return: 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
