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
	hash_node_t *new_node, *head;
	unsigned long int idx;

	if (ht == NULL)
		return (0);

	idx = key_index((const unsigned char *) key, ht->size);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	if (ht->array[idx] == NULL)
	{
		ht->array[idx] = new_node;
	}

	head = ht->array[idx];
	if (strcmp(key, head->key) == 0)
	head->value = strdup(value);

	else
	{
	new_node->next = head;
	ht->array[idx] = new_node;
	}

	return (1);
}
