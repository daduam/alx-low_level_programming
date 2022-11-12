#include "main.h"
#include "stdlib.h"

/**
 * _calloc - allocates memory for an array using malloc.
 *
 * @nmemb: number of elements
 * @size: bytes for each element
 * Return: A pointer to the allocated memory.
 *         NULL if nmemb or size is 0, or if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;

	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);

	if (p != NULL)
		for (i = 0; i < (size * nmemb); i++)
			p[i] = 0;

	return (p);
}
