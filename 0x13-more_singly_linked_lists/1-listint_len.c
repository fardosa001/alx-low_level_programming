#include "lists.h"

/**
 * listint_len - prints number of elementsin a linked listint_t list
 * @h: Head of the linked list
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	int num = 0;

	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return (num);
}
