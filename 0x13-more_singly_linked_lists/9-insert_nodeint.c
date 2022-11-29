#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 *
 * @head: Address of the head of the listint_t list.
 * @idx: Zero-indexed index of the list where the new node should be added.
 * @n: Integer value of the n field of the new node.
 * Return: The address of the new node, or NULL if insertion failed or if it is
 *         not possible to add a new node at index @idx.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int node_count = 0;
	listint_t *new_elem, *cur;

	if (head == NULL)
		return (NULL);

	new_elem = malloc(sizeof(listint_t));
	if (new_elem == NULL)
		return (NULL);
	new_elem->n = n;

	if (idx == 0)
	{
		new_elem->next = *head;
		*head = new_elem;
		return (new_elem);
	}

	for (cur = *head; cur; cur = cur->next)
		node_count += 1;

	if (idx > node_count)
		return (NULL);

	for (cur = *head; idx > 1; idx -= 1)
		cur = cur->next;

	new_elem->next = cur->next;
	cur->next = new_elem;

	return (new_elem);
}
