#include "lists.h"

/**
 * free_listint2 - frees list and makes head NULL
 * @head: pointer
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head != NULL)
	{
		tmp = (*head)->next;
		free((*head));
		(*head) = tmp;
	}
	head = NULL;
}
