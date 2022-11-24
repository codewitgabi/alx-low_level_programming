#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints the elements of a singlu linked list
 * @h: pointer to the linked list node structure
 * Return: length of printed elements
 */


size_t print_list(const list_t *h)
{
	int i = 0;

	for (i = 0; h; i++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
