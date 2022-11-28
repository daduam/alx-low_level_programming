#include "lists.h"

/**
 * listint_len - Counts the elements in a listint_t list.
 *
 * @h: The listint_t to return the length of.
 * Return: The number of elements in @h.
 */
size_t listint_len(const listint_t *h)
{
	int node_count = 0;

	while (h)
	{
		node_count += 1;
		h = h->next;
	}

	return (node_count);
}
