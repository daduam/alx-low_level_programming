#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 *
 * @head: pointer to the head of the listint_t list.
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	if (!head)
		return (0);
	printf("[%p] %d\n", (void *)head, head->n);
	if (head->next < head)
		return (print_listint_safe(head->next) + 1);
	printf("-> [%p] %d\n", (void *)head->next, head->next->n);
	return (1);
}
