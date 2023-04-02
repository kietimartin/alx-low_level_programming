#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - print list
 * @k: the  head of list
 * Return: elements number
 */

size_t print_list(const list_t *k)
{
	int count = 0;

	while (k != NULL)
	{
		if (k->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", k->len, k->str);
		k = k->next;
		count++;
	}
	return (count);
}
