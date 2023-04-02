#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_node - adds a node
 * @h: head address, dereferenced
 * @str: string
 * Return: address of new node
 */

list_t *add_node(list_t **h, const char *str)
{
	list_t *new_node;
	int i = 0;

	while (str[i])
		i++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = *h;

	*h = new_node;

	return (new_node);
}
