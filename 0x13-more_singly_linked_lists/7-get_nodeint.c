#include "lists.h"

/**
 * get_nodeint_at_index - Gets node at index @index of the listint_t list.
 *
 * @head: Head of the listint_t list.
 * @index: Index of the node, starting at 0.
 * Return: The node at index @index, or NULL if it does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while (index > 0 && head)
	{
		head = head->next;
		index -= 1;
	}

	if (index == 0 && head)
		return (head);

	return (NULL);
}
