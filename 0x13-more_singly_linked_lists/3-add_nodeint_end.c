#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end -  adds a new node at the beginning of a listint_t list.
 * @head: head of the linked list
 * @n: integer
 *
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node_end;
	listint_t *temp;



		node_end = malloc(sizeof(listint_t));
		if (node_end == NULL)
		return (NULL);

		node_end->n = n;
		if (*head == NULL)
		{
			node_end->next = *head;
			*head = node_end;
		}
		else
		{
			node_end->next = NULL;
			temp = *head;
			while (temp->next)
			temp = temp->next;
			temp->next = node_end;
		}
			return (node_end);
}
