#include "lists.h"

/**
 * dlistint_len - number of elements in a linked dlistint_t list.
 *
 * @h: the head of the dlistint_t list.
 * Return: number of elements in @h.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	dlistint_t *p = (dlistint_t *)h;

	while (p)
	{
		count++;
		p = p->next;
	}
	return (count);
}
