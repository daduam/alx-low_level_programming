#include "stdio.h"
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a
 * square matrix of integers
 * @a: square matrix of integers
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
	int i;
	int d1 = 0, d2 = 0;

	for (i = 0; i < size; i++)
	{
		d1 += a[(size * i) + i];
		d2 += a[(size * i) + (size - i - 1)];
	}

	printf("%d, %d\n", d1, d2);
}
