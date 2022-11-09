#include "main.h"
#include "stdlib.h"

/**
 * _strdup - returns a copy of @str
 *
 * @str: char*
 * Return: NULL if @str is null or if insufficient memory
 *         Otherwise, return a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	int i, j;
	char *dup;

	if (str == NULL)
		return (NULL);

	dup = malloc(sizeof(str));

	for (i = 0, j = 0; str[i] != '\0'; i++, j++)
		dup[j] = str[i];

	return (dup);
}
