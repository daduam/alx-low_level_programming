#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list.
 *
 * @h: address of a pointer to the head of the listint_t list.
 * Return: the size of the list that was free'd.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current, *temp;

	if (h == NULL)
		return (0);
	current = *h, *h = NULL;
	while (current)
	{
		temp = current;
		free(temp);
		count += 1;
		if (current->next >= current)
			break;
		current = current->next;
	}
	return (count);
}
