#include "lists.h"

/**
 * pop_listint - deletes head node of linked list
 * @head: pointer to head
 *
 * Return: 0 or result
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}

