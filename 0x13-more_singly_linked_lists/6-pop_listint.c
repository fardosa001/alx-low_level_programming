#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: head of the linked list
 * Return: the head node’s data (n), if empty return 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n = 0;

	temp = *head;

	if (head == NULL)
		return (0);
	*head = temp->next;
	n = temp->n;
	free(temp);
	return (n);
}
