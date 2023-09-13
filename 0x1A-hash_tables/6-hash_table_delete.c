#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *temp;
	unsigned long int idx;

	if (ht == NULL)
		return;
	idx = 0;
	while (idx < ht->size)
	{
		node = ht->array[idx];
		while (node != NULL)
		{
			temp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			if (temp != NULL)
				node = temp;
			else
				break;

		}
		idx++;
	}
	free(ht->array);
	free(ht);
}
