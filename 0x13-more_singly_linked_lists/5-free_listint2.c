#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets head to NULL.
 *
 * @head: Head of the listint_t list to free.
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head)
	{
		while (*head)
		{
			ptr = (*head)->next;
			free(*head);
			*head = ptr;
		}

		head = NULL;
	}
}
