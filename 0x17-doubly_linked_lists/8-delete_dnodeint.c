#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index.
 *
 * @head: address of the head of the dlistint_t list.
 * @index: index of the node that should be deleted. Index starts at 0.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *target;

	if (head == NULL)
		return (-1);
	target = *head;
	while (target && index != 0)
	{
		target = target->next;
		index--;
	}
	if (!target || index != 0)
		return (-1);
	if (*head == target)
		*head = target->next;
	if (target->next)
		target->next->prev = target->prev;
	if (target->prev)
		target->prev->next = target->next;
	free(target);
	return (1);
}
