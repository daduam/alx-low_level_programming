#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array of integers
 *                        using the Interpolation search algorithm
 *
 * @array:  Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 * Return: The first index where value is located. If value is not present in
 *         array or if array is NULL, your function must return -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t lo, hi, mid;

	if (array == NULL)
		return (-1);
	lo = 0;
	hi = size - 1;
	while ((array[hi] != array[lo]) &&
		   (value >= array[lo]) &&
		   (value <= array[hi]))
	{
		mid = lo + ((value - array[lo]) * (hi - lo) / (array[hi] - array[lo]));
		printf("Value checked array[%lu] = [%d]\n", mid, array[mid]);
		if (array[mid] < value)
			lo = mid + 1;
		else if (array[mid] > value)
			hi = mid - 1;
		else
			return (mid);
	}
	if (value == array[lo])
	{
		printf("Value checked array[%lu] = [%d]\n", lo, array[lo]);
		return (lo);
	}
	if (array[hi] != array[lo])
		printf(
			"Value checked array[%lu] is out of range\n",
			lo + ((value - array[lo]) * (hi - lo) / (array[hi] - array[lo])));
	return (-1);
}
