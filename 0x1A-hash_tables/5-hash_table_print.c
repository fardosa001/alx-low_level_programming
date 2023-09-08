#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *node;
	int pr_coma = 1;

	if (ht == NULL)
		return;

	printf("{");

	idx = 0;
	for (idx = 0; idx < ht->size; idx++)
	{
		node = ht->array[idx];
		while (node != NULL)
		{
			if (pr_coma == 1)
			{
				printf("'%s': '%s'", node->key, node->value);
				pr_coma = 0;
			}
			else

				printf(", '%s': '%s'", node->key, node->value);
			node = node->next;
		}
	}
		printf("}\n");
}
