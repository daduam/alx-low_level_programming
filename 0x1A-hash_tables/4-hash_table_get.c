#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key.
 *
 * @ht: Hash table you want to look into.
 * @key: Key you are looking for.
 * Return: The value associated with the element, or NULL
 *         if key couldn't be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long idx;
	hash_node_t *node;

	if (!ht || !key)
		return (NULL);
	idx = key_index((unsigned char *)key, ht->size);
	node = ht->array[idx];
	if (!node)
		return (NULL);
	while (strcmp(node->key, key) != 0)
		node = node->next;
	return (node->value);
}
