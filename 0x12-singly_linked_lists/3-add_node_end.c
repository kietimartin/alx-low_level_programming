#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_node_end - add a tail node
 * @h: the head node
 * @str: string to be added
 * Return: address of new node
 */

list_t *add_node_end(list_t **h, const char *str)
{
	int i = 0;
	list_t *new_node, *n;

	while (str[i])
		i++;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = NULL;
	if (strdup(str) == NULL)
	{
		free(new_node);
		return (NULL);
	}
	if (*h == NULL)
	{
		*h = new_node;
		return (new_node);
	}
	else
	{
		n = *h;
		while (n->next != NULL)
			n = n->next;
		n->next = new_node;
		return (new_node);
	}
}