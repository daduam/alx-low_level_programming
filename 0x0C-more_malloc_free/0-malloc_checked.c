#include "main.h"
#include "stdlib.h"

/**
 * malloc_checked - allocates memory using malloc.
 *
 * @b: unsigned int
 * Return: a pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
