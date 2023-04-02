#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - list length
 * @k: the first node
 * Return: elements number
 */

size_t list_len(const list_t *k)
{
	int count = 0;

	while (k != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
