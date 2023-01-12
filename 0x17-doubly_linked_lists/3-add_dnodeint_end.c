#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 *
 * @head: address of the head of the dlistint_t list.
 * @n: value of n of the new node.
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current;

	current = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		while (current->next)
			current = current->next;
		current->next = new;
		new->prev = current;
	}
	return (new);
}
