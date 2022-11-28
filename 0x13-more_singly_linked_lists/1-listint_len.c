#include <stdio.h>
#include "lists.h"

/**
 * listint_len - prints the length of the given linked list
 * @h: pointer to linked list struct
 * Return: length of list
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}

	return (len);
}
