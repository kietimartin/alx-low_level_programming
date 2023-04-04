#include "lists.h"

/**
 * add_nodeint_end - adds new node at endof linked list
 * @head: last node of the linked list
 * @n: data to be entered to the new node
 *
 * Return: address of new el or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
