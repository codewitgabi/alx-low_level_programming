#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints the elements of a linked list to stdout
 * @h: pointer to linked list struct
 * Return: number of elements in the linked list
 */

size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		printf("%d\n", h->n);
		len++;
		h = h->next;
	}

	return (len);
}
