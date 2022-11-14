#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new struct.
 * @name: param
 * @age: param
 * @owner: param
 * Return: pointer to struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *ret_dog;

	ret_dog = malloc(sizeof(struct dog));

	if (ret_dog == NULL)
		return (NULL);

	ret_dog->name = name;
	ret_dog->age = age;
	ret_dog->owner = owner;

	return (ret_dog);
}
