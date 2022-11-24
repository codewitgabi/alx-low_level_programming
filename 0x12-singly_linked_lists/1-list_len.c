#include "lists.h"

/**
 * list_len - prints the length of the linked list
 * @h: pointer to the node of the linked list
 * Return: length of the linked list
 */

size_t list_len(const list_t *h)
{
	int len;

	for (len = 0; h; len++)
		h = h->next;

	return (len);
}
