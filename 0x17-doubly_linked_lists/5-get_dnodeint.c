#include "lists.h"

/**
 * *get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @index: index of the node, starting from 0
 * @head: head of the node
 * Return: if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int nth_node = 0;

	while (head != NULL)
	{
		if (nth_node == index)
		{
			return (head);
		}
	head = head->next;
	++nth_node;
}

	return (NULL);

}
