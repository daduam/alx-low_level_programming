#include "lists.h"

/**
 * list_len - Counts the number elements in a list_t.
 *
 * @h: The list_t to operate on.
 * Return: The number of elements in @h.
 */
size_t list_len(const list_t *h)
{
	int node_count = 0;

	while (h != NULL)
	{
		node_count += 1;
		h = h->next;
	}

	return (node_count);
}
