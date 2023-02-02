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
	hash_node_t *ptr;

	if (!ht || !ht->array || !key || strlen(key) == 0 || !value)
		return (0);
	idx = key_index((unsigned char *)key, ht->size);
	ptr = ht->array[idx];
	while (ptr)
	{
		if (strcmp(ptr->key, key) == 0)
		{
			free(ptr->value);
			ptr->value = strdup(value);
			return (1);
		}
		ptr = ptr->next;
	}
	ptr = malloc(sizeof(hash_node_t));
	if (!ptr)
		return (0);
	ptr->key = strdup(key);
	ptr->value = strdup(value);
	ptr->next = ht->array[idx];
	ht->array[idx] = ptr;
	return (1);
}
