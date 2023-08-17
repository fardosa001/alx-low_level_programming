#include "lists.h"
#include <stdlib.h>

/**
 * *add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: head of the list
 * @n: integer
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_end_node, *temp;

	new_end_node = malloc(sizeof(dlistint_t));
	if (new_end_node == NULL)
		return (NULL);

	new_end_node->n = n;
	new_end_node->next = NULL;

	if (*head == NULL)
	{
		new_end_node->prev = NULL;
		*head = new_end_node;
		return (new_end_node);
	}

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = new_end_node;
	new_end_node->prev = temp;

	return (new_end_node);

}
