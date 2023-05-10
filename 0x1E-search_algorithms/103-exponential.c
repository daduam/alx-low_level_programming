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

/**
 * exponential_search - Searches for a value in a sorted array of integers
 *                      using the Exponential search algorithm
 *
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 * Return: The first index where value is located. If value is not present in
 *         array or if array is NULL, your function must return -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound, lo, hi;
	int index;

	if (array == NULL)
		return (-1);
	bound = 1;
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	lo = bound / 2;
	hi = bound + 1 < size ? bound + 1 : size;
	printf("Value found between indexes [%lu] and [%lu]\n", lo, hi - 1);
	index = binary_search(array + lo, hi - lo, value);
	if (index > -1)
		return (index + lo);
	return (-1);
}
