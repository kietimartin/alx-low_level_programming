#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_list - frees a lists
 * @h: head of list
 */

void free_list(list_t *h)
{
	list_t *buffer;

	while (h != NULL)
	{
		buffer = h->next;
		free(h->str);
		free(h);
		h = buffer;
	}
}

