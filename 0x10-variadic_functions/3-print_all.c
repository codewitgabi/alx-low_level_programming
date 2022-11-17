#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints a string to stdout with specified format.
 * @format: format specifiers to print string
 */

void print_all(const char * const format, ...)
{
	unsigned int i;
	char *s;
	va_list arg;

	is_valid_specifier = 1;

	for (i = 0; format[i]; i++)
	{
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(arg, int));
				is_valid_specifier = 1;
				break;
			case 'f':
				printf("%f", va_arg(arg, float));
				is_valid_specifier = 1;
				break;
			case 'c':
				printf("%c", va_arg(arg, char));
				is_valid_specifier = 1;
				break;
			case 's':
				s = va_arg(arg, char *);
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s", s);
				is_valid_specifier = 1;
				break;
			default:
				is_valid_specifier = 0;
				break;
		}
		if (format[i + 1] && is_valid_specifier == 1)
			printf(", ");
	}
	va_end(arg);

	printf("\n");
}
