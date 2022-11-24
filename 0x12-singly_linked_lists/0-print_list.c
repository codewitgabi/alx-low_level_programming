#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints the elements of a singlu linked list
 * @h: pointer to the linked list node structure
 * Return: length of printed elements
 */


size_t print_list(const list_t *h)
{
	unsigned int n = h->len;
	int i = 0, j;
	char *s;

	for (i = 0; h; i++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			s = h->str;
			for (j = 0; s[j]; j++)
				;
			printf("[%d] %s\n", j, h->str);
		}
		h = h->next;
	}
	return (i);
}
