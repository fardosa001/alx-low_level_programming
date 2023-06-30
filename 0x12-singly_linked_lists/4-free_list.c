#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees list_t list
 * @head: head of linked list
 * Return: 0
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}

