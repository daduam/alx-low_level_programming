#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 *
 * @h: the head of the dlistint_t list.
 * Return: the number of nodes in @h.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	dlistint_t *p = (dlistint_t *)h;

	while (p)
	{
		printf("%d\n", p->n);
		p = p->next;
		count++;
	}
	return (count);
}
