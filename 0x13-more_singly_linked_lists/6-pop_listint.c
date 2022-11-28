#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list,
 *               and returns the head node's data (n field).
 *
 * @head: Address of the head of the listint_t list.
 * Return: Value of the n field of the popped head, and 0 if the listint_t
 *         list is empty.
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *ptr;

	if (head == NULL || *head == NULL)
		return (0);

	ptr = *head;
	*head = ptr->next;
	data = ptr->n;

	free(ptr);

	return (data);
}
