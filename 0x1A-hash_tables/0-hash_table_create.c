#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 *
 * @size: Size of the array.
 * Return: A pointer to the newly created hash table, or NULL
 *         if something went wrong.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;

	new = malloc(sizeof(hash_table_t));
	if (new)
	{
		new->size = size;
		new->array = malloc(sizeof(hash_node_t *) * size);
		if (new->array)
			return (new);
		free(new);
	}
	return (NULL);
}
