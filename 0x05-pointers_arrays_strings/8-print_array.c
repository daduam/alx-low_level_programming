#include "stdio.h"

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line
 * @a: integer array
 * @n: number of elements in a
 */
void print_array(int *a, int n)
{
	int i;

	printf("%d", a[0]);

	for (i = 1; i < n; i++)
		printf(", %d", a[i]);

	printf("\n");
}
