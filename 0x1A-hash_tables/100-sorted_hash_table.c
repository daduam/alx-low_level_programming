#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table.
 *
 * @size: Size of the array.
 * Return: A pointer to the newly created sorted hash table, or NULL
 *         if something went wrong.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_table_t *new;

	new = malloc(sizeof(shash_table_t));
	if (!new)
		return (NULL);
	new->array = malloc(sizeof(shash_node_t *) * size);
	if (!new->array)
	{
		free(new);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		new->array[i] = NULL;
	new->shead = NULL;
	new->stail = NULL;
	new->size = size;
	return (new);
}

/**
 * shash_table_insert_before - Insert node before another one in slist.
 *
 * @ht: Sorted hash table you want to add or update the key/value to
 * @before: Node to insert new node before.
 * @node: New node to insert.
 * Return: 1 if it succeeded, 0 otherwise.
 */
int shash_table_insert_before(
	shash_table_t *ht,
	shash_node_t *before,
	shash_node_t *node)
{
	if (!before->sprev)
		ht->shead = node;
	node->snext = before;
	node->sprev = before->sprev;
	if (before->sprev)
		before->sprev->snext = node;
	before->sprev = node;
	return (1);
}

/**
 * shash_table_set_shead - Set the shead of the sorted hash table.
 *
 * @ht: Sorted hash table you want to add or update the key/value to
 * @node: The node to set shead to.
 * Return: 1 if it succeeded, 0 otherwise.
 */
int shash_table_set_shead(shash_table_t *ht, shash_node_t *node)
{
	if (!ht || !node)
		return (0);

	ht->shead = node;
	ht->stail = node;
	return (1);
}

/**
 * shash_table_set_stail - Set the stail of the sorted hash table.
 *
 * @ht: Sorted hash table you want to add or update the key/value to
 * @node: The node to set stail to.
 * Return: 1 if it succeeded, 0 otherwise.
 */
int shash_table_set_stail(shash_table_t *ht, shash_node_t *node)
{
	if (!ht || !node)
		return (0);

	node->sprev = ht->stail;
	ht->stail->snext = node;
	ht->stail = node;
	return (1);
}

/**
 * shash_table_set - Adds an element to the sorted hash table.
 *
 * @ht: Sorted hash table you want to add or update the key/value to
 * @key: Key. Cannot be an empty string.
 * @value: The value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	shash_node_t *ptr, *new;

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
	new = malloc(sizeof(shash_node_t));
	if (!new)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[idx];
	ht->array[idx] = new;
	new->sprev = NULL;
	new->snext = NULL;
	if (!ht->shead)
		return (shash_table_set_shead(ht, new));
	ptr = ht->shead;
	while (ptr)
	{
		if (strcmp(new->key, ptr->key) < 0)
			return (shash_table_insert_before(ht, ptr, new));
		ptr = ptr->snext;
	}
	return (shash_table_set_stail(ht, new));
}

/**
 * shash_table_get - Retrieves a value associated with a key.
 *
 * @ht: Sorted hash table you want to look into.
 * @key: Key you are looking for.
 * Return: The value associated with the element, or NULL
 *         if key couldn't be found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int idx;
	shash_node_t *ptr;

	if (!ht || !key)
		return (NULL);
	idx = key_index((unsigned char *)key, ht->size);
	for (ptr = ht->array[idx]; ptr; ptr = ptr->next)
		if (strcmp(ptr->key, key) == 0)
			return (ptr->value);
	return (NULL);
}

/**
 * shash_table_print - Prints the sorted hash table using
 *                     the sorted linked list.
 *
 * @ht: The sorted hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	unsigned int count;
	shash_node_t *ptr;

	if (!ht)
		return;
	printf("{");
	for (ptr = ht->shead, count = 0; ptr; ptr = ptr->snext, count++)
	{
		if (count)
			printf(", ");
		printf("'%s': '%s'", ptr->key, ptr->value);
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints the sorted hash table in reverse using
 *                         the sorted linked list.
 *
 * @ht: The sorted hash table.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	unsigned int count;
	shash_node_t *ptr;

	if (!ht)
		return;
	printf("{");
	for (ptr = ht->stail, count = 0; ptr; ptr = ptr->sprev, count++)
	{
		if (count)
			printf(", ");
		printf("'%s': '%s'", ptr->key, ptr->value);
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table.
 *
 * @ht: The sorted hash table to delete.
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned int i;
	shash_node_t *current, *temp;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			temp = current;
			current = current->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
