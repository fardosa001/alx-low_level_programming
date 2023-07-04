#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: head of the linked list
 * @index: index of the node, starting at 0
 * Return: NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nth_node;
	size_t i = 0;

	if (head == NULL)
		return (NULL);

	nth_node = head;
	while (nth_node != NULL)
	{
		if (i == index)
			return (nth_node);
		nth_node = nth_node->next;
		i++;
	}
	return (NULL);
}

