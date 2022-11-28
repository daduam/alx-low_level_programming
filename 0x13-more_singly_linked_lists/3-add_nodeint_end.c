#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 *
 * @head: Head of the listint_t list.
 * @n: Integer value for the n field of the new element.
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_elem, *ptr;

	new_elem = malloc(sizeof(listint_t));
	if (new_elem == NULL)
		return (NULL);

	new_elem->n = n;

	if (*head == NULL)
	{
		*head = new_elem;
		return (new_elem);
	}

	ptr = *head;
	while (ptr->next)
		ptr = ptr->next;

	ptr->next = new_elem;

	return (new_elem);
}
