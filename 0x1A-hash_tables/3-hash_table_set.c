#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 *
 * @ht: Hash table you want to add or update the key/value to
 * @key: Key. Cannot be an empty string.
 * @value: The value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *new;

	if (!ht || !ht->array || !key || strlen(key) == 0 || !value)
		return (0);
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	idx = key_index((unsigned char *)key, ht->size);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}
