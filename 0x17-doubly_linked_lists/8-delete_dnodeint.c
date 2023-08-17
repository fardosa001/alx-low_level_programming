#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @index: Index of the node to be deleted
 * @head: head of the list
 * Return: 1 if succeeful, -1 if it fails
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node_to_del;

	if (*head == NULL)
		return (-1);

	node_to_del = *head;
	if (index == 0)
	{
		*head = node_to_del->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(node_to_del);
		return (1);
	}

	while ((index != 0) && (node_to_del->next != NULL))
	{

	index--;
	node_to_del = node_to_del->next;
	}

	if (index == 0)
	{
		node_to_del->prev->next = node_to_del->next;
		if (node_to_del->next != NULL)
			node_to_del->next->prev = node_to_del->prev;
		free(node_to_del);

		return (1);
	}
	return (-1);
}
