#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_h.
 *
 * @head: Head of the list_h.
 * @str: char* value for str element of the list_h.
 * Return: The address of the new element, or NULL if adding failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	int nchars = 0;
	list_t *new_elem;

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

	new_elem->next = *head;
	*head = new_elem;

	return (*head);
}
