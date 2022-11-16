#include "function_pointers.h"

/**
 * int_index - Searches for an integer.
 *
 * @array: Integer array.
 * @size: Number of elements in the array.
 * @cmp: Pointer to the function to be used to compare values.
 * Return: Index of the first element for which the @cmp function
 *         does not return 0.
 *         -1 if no element matches or size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || cmp == 0 || array == 0)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);

	return (-1);
}
