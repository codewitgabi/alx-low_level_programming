#include <stdlib.h>
#include "dog.h"

/**
 * _strcpy - copies a string
 * @s: string to copy
 * Return: pointer to returned string
 */

char *_strcpy(char *s)
{
	char *p;
	int i, j;

	if (s == NULL)
		return (NULL);

	for (j = 0; *(s + j); j++)
		;
	p = malloc(sizeof(char) * (j + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; *(s + i); i++)
		p[i] = s[i];

	p[i] = '\0';

	return (p);
}

/**
 * new_dog - creates a new struct.
 * @name: param
 * @age: param
 * @owner: param
 * Return: pointer to struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ret_dog;
	char *cpy_name, *cpy_owner;

	if (name == NULL || owner == NULL)
		return (NULL);

	ret_dog = malloc(sizeof(dog_t));

	if (ret_dog == NULL)
		return (NULL);

	cpy_name = _strcpy(name);
	if (cpy_name == NULL)
	{
		free(ret_dog);
		return (NULL);
	}

	cpy_owner = _strcpy(owner);
	if (cpy_owner == NULL)
	{
		free(ret_dog);
		return (NULL);
	}

	ret_dog->name = cpy_name;
	ret_dog->age = age;
	ret_dog->owner = cpy_owner;

	return (ret_dog);
}
