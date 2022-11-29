#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at @index of a listint_t list.
 *
 * @head: Address of the head of the listint_t list.
 * @index: The index of the node to be deleted starting at 0.
 * Return: 1 if it success. -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int node_count;
	listint_t *ptr, *elem;

	if (head == NULL)
		return (-1);

	for (node_count = 0, ptr = *head; ptr != NULL; node_count++)
		ptr = ptr->next;

	if (index >= node_count)
		return (-1);

	if (index == 0)
	{
		elem = *head;
		*head = elem->next;
	}
	else
	{
		for (ptr = *head; index > 1; index--)
			ptr = ptr->next;

		elem = ptr->next;
		ptr->next = elem->next;
	}

	free(elem);

	return (1);
}
