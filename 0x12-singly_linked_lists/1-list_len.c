#include "lists.h"
#include  <stdlib.h>
#include <string.h>

/**
 * list_len - Prints the number of elements in a linked list_t list.
 * @h: linked list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
