#include "stdio.h"

/**
 * main - Prints the first 98 Fibonacci numbers starting with 1 and 2
 *
 * Return: 0
 */
int main(void)
{
	long int prev = 1, cur = 2, temp, n = 98;

	printf("%ld", prev);
	n--;

	while (n > 0)
	{
		printf(", %ld", cur);

		temp = prev + cur;
		prev = cur;
		cur = temp;

		n--;
	}

	printf("\n");

	return (0);
}
