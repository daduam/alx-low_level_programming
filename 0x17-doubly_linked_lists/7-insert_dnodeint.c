#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 *
 * @h: address of the head of the dlistint_t linked list.
 * @idx: index of the list where the new node should be added, starting at 0.
 * @n: data value of the new node.
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count;
	dlistint_t *new, *current;

	if (h == NULL)
		return (NULL);
	for (count = 0, current = *h; current != NULL; count++)
		current = current->next;
	if (idx > count)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL, new->next = NULL;
	current = *h;
	if (idx == 0)
	{
		if (*h)
		{
			new->next = *h;
			(*h)->prev = new;
		}
		*h = new;
	}
	else if (idx == count)
	{
		while (current->next)
			current = current->next;
		current->next = new;
		new->prev = current;
	}
	else
	{
		for (; idx != 1; idx--)
			current = current->next;
		new->next = current->next;
		new->prev = current;
		current->next = new;
		new->next->prev = new;
	}
	return (new);
}
