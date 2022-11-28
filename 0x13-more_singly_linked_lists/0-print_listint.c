#include "lists.h"

/**
 * print_listint - Prints all elements in a listint_t list.
 *
 * @h: The listint_t list to print.
 * Return: The number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	int node_count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_count += 1;
	}

	return (node_count);
}
