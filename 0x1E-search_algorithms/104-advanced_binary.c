#include "search_algos.h"

/**
 * _advanced_binary - Recursive helper
 *
 * @array: Pointer to the first element of the array to search in
 * @lo: Left bound of the subarray
 * @hi: Right bound of the subarray
 * @value: Value to search for
 * Return: The index where value is located. If value is not present in array
 *         or if array is NULL, your function must return -1.
 */
int _advanced_binary(int *array, size_t lo, size_t hi, int value)
{
	size_t i, mid;

	if (array == NULL || lo > hi)
		return (-1);
	printf("Searching in array: %d", array[lo]);
	for (i = lo + 1; i <= hi; i++)
		printf(", %d", array[i]);
	printf("\n");
	mid = (lo + hi) / 2;
	if ((mid == 0 || array[mid - 1] < value) && array[mid] == value)
		return (mid);
	else if (array[mid] < value)
		return (_advanced_binary(array, mid + 1, hi, value));
	else
		return (_advanced_binary(array, lo, mid, value));
}

/**
 * advanced_binary - Find the index of the first occurrence of value
 *                   in the array using Binary Search
 *
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 * Return: The index where value is located. If value is not present in array
 *         or if array is NULL, your function must return -1.
 */
int advanced_binary(int *array, size_t size, int value)
{
	return (_advanced_binary(array, 0, size - 1, value));
}
