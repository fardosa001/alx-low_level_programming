#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - returns the number of elements in a list.
 * @h: doubly linked list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int num_elements = 0;

	while (h != NULL)
	{
		h = h->next;
		++num_elements;
	}

	return (num_elements);
}
