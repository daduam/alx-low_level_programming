#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 *
 * @head: Head of the listint_t list.
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
