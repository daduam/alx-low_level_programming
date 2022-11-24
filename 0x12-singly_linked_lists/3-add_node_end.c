#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 *
 * @head: Head of the list_t list.
 * @str: char* value for str element of the list_h.
 * Return: The address of the new element, or NULL if adding failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int nchars = 0;
	list_t *new_elem, *ptr;

	new_elem = malloc(sizeof(list_t));
	if (new_elem == NULL)
		return (NULL);

	while (str[nchars] != '\0')
		nchars++;
	new_elem->len = nchars;

	new_elem->str = strdup(str);
	if (new_elem->str == NULL)
	{
		free(new_elem);
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = new_elem;
		return (new_elem);
	}

	ptr = *head;
	while (ptr->next != NULL)
		ptr = ptr->next;

	ptr->next = new_elem;

	return (new_elem);
}
