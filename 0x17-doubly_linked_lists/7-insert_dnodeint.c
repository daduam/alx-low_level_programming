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
	dlistint_t *new, *current;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*h == NULL && idx == 0)
	{
		new->prev = NULL;
		*h = new;
	}
	else
	{
		current = *h;
		while (idx != 1 && current)
		{
			idx--;
			current = current->next;
		}
		if (idx == 1 && current)
		{
			new->next = current->next;
			new->prev = current;
			current->next = new;
			return (new);
		}
	}
	return (NULL);
}
