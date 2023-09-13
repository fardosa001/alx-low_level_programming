#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @key: key
 * @ht: hash table you want to add or update the key/value to
 * @value: value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node = NULL, *head = NULL;
	unsigned long int idx = 0;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return(0);
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (0);
	}
	node->next = NULL;

	if (ht->array[idx] == NULL)
	{
		ht->array[idx] = node;
	}
	else
	{
		head = ht->array[idx];
		if (strcmp(key, head->key) == 0)
		{
			free(head->value);
			free(node->key);
			head->value = strdup(value);
			if (head->value == NULL)
			{
				free(node->key);
				free(node->value);
				free(node);
				return (0);
			}
			free(node->key);
			free(node->value);
			free(node);
			return (1);
		}
		
		else
		{
			node->next = head;
			ht->array[idx] = node;
		}
	}
	return (1);
}
