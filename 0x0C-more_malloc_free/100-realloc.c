#include "main.h"
#include "stdlib.h"

/**
 * _realloc - Reallocates a memory block using malloc and free.
 *
 * @ptr: Pointer to the memory previously allocated with
 *       a call to malloc: malloc(old_size)
 * @old_size: The size, in bytes, of the allocated space for ptr
 * @new_size: The new size, in bytes of the new memory block
 * Return: void*
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (new_size > old_size || ptr == NULL)
	{
		p = malloc(new_size);
		free(ptr);
		return (p);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	return (ptr);
}
