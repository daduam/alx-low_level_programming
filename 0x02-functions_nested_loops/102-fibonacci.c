#include <stdio.h>

/**
 * main - This program prints the first 50 Fibonacci numbers starting with
 * 1 and 2
 *
 * Return: 0
 */
int main(void)
{
	int n = 50;
	long int prev = 1, cur = 2;

	printf("%ld", prev);
	n--;

	while (n > 0)
	{
		long int temp = prev + cur;

		printf(", %ld", cur);
		prev = cur;
		cur = temp;

		n--;
	}

	putchar('\n');

	return (0);
}
