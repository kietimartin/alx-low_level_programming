#include "lists.h"

/**
 * listint_len - prints number of el in a list
 * @h: pointer to start of list
 * Return: length
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (len);
}
