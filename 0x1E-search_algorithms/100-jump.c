#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers using the
 *               Jump search algorithm
 *
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 * Return: The first index where value is located. If value is not present in
 *         array or if array is NULL, your function must return -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t a, b;

	if (array == NULL)
		return (-1);
	a = b = 0;
	while (array[b] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", b, array[b]);
		a = b;
		b += (int)sqrt(size);
		if (b >= size)
			break;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", a, b);
	while (array[a] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", a, array[a]);
		a += 1;
		if (a == b || a == size)
			break;
	}
	if (array[a] == value)
	{
		printf("Value checked array[%lu] = [%d]\n", a, array[a]);
		return (a);
	}
	return (-1);
}
