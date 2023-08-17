#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_node - create a node at an index
 * @temp: pointer to the nth position
 * @n : integer
 * Return: address of inserted node
 */
dlistint_t *create_node(dlistint_t *temp, int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(struct dlistint_s));
	if (new_node == NULL)
	return (NULL);

	new_node->n = n;

	new_node->next = temp;
	new_node->prev = temp->prev;
	temp->prev->next = new_node;
	temp->prev = new_node;

	return (new_node);
}


/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @idx: Index of the list where the new node should be added.Index starts at 0
 * @h: pointer to head of the list
 * @n: integer
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current;

	if (idx == 0)

		return (add_dnodeint(h, n));
	if (h != NULL)
		return (NULL);

	current = *h;
	while ((idx != 0) && (current->next))
	{
		idx--;
		current = current->next;
		if (idx == 0)
			return (create_node(current, n));
	}

	if (idx == 1)
		return (add_dnodeint_end(h, n));
	return (NULL);
}
