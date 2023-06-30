#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: head of the linked list
 * @str: string to be used
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_node;
	list_t *temp;

	if (str != NULL)
	{
		end_node = malloc(sizeof(list_t));
		if (end_node == NULL)
			return (NULL);

		end_node->str = strdup(str);
		end_node->len = strlen(str);
		end_node->next = NULL;
	}
		if (*head == NULL)
		{
			*head = end_node;
			return (end_node);
		}

		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = end_node;

		return (end_node);

}
