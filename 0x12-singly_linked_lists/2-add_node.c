#include "lists.h"

/**
 * add_node - adds a node at the beginning of a linked list
 * @head: pointer to pointer of the head node
 * @str: pointer to char to be added to the linked list
 * Return: linked list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_ *node;
	char *dup_str;
	int i;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	dup_str = strdup(str);
	if (dup_str == NULL)
	{
		free(node);
		return (NULL);
	}

	for (i = 0; dup_str[i]; i++)
		;

	node->str = dup_str;
	node->len = i;
	node->next = *head;

	*head = node;

	return (node);
}
