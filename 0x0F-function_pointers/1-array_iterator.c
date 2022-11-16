#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter
 *                  on each element of an array.
 *
 * @array: Array to iterate on.
 * @size: Size of the array.
 * @action: A pointer to the function to call on each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == 0 || array == 0)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
