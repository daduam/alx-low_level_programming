#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 *
 * @ht: The hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i, count;
	hash_node_t *node;

	if (!ht)
		return;
	printf("{");
	for (i = 0, count = 0; i < ht->size; i++)
	{
		if (!ht->array[i])
			continue;
		for (node = ht->array[i]; node; node = node->next)
		{
			if (count)
				printf(", ");
			count++;
			printf("'%s': '%s'", node->key, node->value);
		}
	}
	printf("}\n");
}
