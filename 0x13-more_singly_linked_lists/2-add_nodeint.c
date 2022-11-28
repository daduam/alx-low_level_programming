#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 *
 * @head: The head of the listint_t list.
 * @n: The value of the n field of the new listint_t node.
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_elem;

	new_elem = malloc(sizeof(listint_t));
	if (new_elem == NULL)
		return (NULL);

	new_elem->n = n;
	new_elem->next = *head;
	*head = new_elem;

	return (new_elem);
}
