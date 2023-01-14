#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 *
 * @head: pointer to the head of the linked list.
 * Return: the address of the node where the loop starts,
 *          or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *hare;

	if (head)
	{
		tortoise = hare = head;
		while (hare->next && hare->next->next)
		{
			tortoise = tortoise->next;
			hare = hare->next->next;
			if (tortoise == hare)
			{
				tortoise = head;
				while (tortoise != hare)
				{
					tortoise = tortoise->next;
					hare = hare->next;
				}
				return (hare);
			}
		}
	}
	return (NULL);
}
