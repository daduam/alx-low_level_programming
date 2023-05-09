#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers using
 *                 the Binary search algorithm
 *
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 * Return: Index where value is located. If value is not present in array or
 *         if array is NULL, your function must return -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, lo, hi, mid;

	if (array == NULL)
		return (-1);
	lo = 0;
	hi = size - 1;
	while (lo <= hi)
	{
		printf("Searching in array: %d", array[lo]);
		for (i = lo + 1; i <= hi; i++)
			printf(", %d", array[i]);
		printf("\n");
		mid = (lo + hi) / 2;
		if (array[mid] < value)
			lo = mid + 1;
		else if (array[mid] > value)
			hi = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
