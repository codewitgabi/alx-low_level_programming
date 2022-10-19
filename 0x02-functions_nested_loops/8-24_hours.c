#include "main.h"

/**
 * jack_bauer - function to print everyinute of the day of jack bauer
 * @void: param
 */

void jack_bauer(void)
{
	int total_time;
	int min_left;
	int min_right;
	int sec_left;
	int sec_right;
	int i;

	total_time = 1440;

	for (i = 0; i < total_time; i++)
	{
		min_left = ((i / 60) % 60) / 10;
		min_right = ((i / 60) % 60) % 10;
		sec_left = (i % 60) / 10;
		sec_right = (i % 60) % 10;

		_putchar(min_left + '0');
		_putchar(min_right + '0');
		_putchar(':');
		_putchar(sec_left + '0');
		_putchar(sec_right + '0');
		_putchar('\n');
	}
}
