#include "main.h"
#include "stdlib.h"

/**
 * array_range - Creates an array of integers in the range [@min...@max]
 *
 * @min: int
 * @max: int
 * Return: Pointer to the newly created array.
 *         NULL if @min>@max or if malloc fails
 */
int *array_range(int min, int max)
{
	int i, n, *p;

	if (min > max)
		return (NULL);

	n = max - min + 1;

	p = malloc(sizeof(int) * n);

	if (p != NULL)
		for (i = 0; i < n; i++)
			p[i] = min + i;

	return (p);
}
