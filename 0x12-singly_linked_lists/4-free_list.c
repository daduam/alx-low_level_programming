#include "lists.h"

/**
 * free_list - Frees a list_t list.
 *
 * @head: Head of the list_t list to free.
 */
void free_list(list_t *head)
{
	list_t *ptr;

	while (head != NULL)
	{
		ptr = head->next;
		free(head->str);
		free(head);
		head = ptr;
	}
}
