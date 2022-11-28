#include "lists.h"

/**
 * sum_listint - Sums all the data (n fields) of a listint_t list.
 *
 * @head: Head of the listint_t list.
 * Return: Sum of all the data fields of the list, or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
