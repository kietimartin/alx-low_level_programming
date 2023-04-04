#include "lists.h"

/**
 * get_nodeint_at_index - get nth node at given index
 * @head: head of linked list
 * @index: position at which wanted node is at
 *
 * Return: node or null
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
