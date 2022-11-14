#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct object
 * @d: pointer to struct object
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("\n");
	else
	{
		if (d->name == NULL)
			d->name = "(nil)";
		printf("Name: %s\n", d->name);
		printf("Age: %1f\n", d->age);
		if (d->owner == NULL)
			d->owner = "(nil)";
		printf("Owner: %s\n", d->owner);
	}
}
