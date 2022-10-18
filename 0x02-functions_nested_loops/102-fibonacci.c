#include <stdio.h>

/**
 * main - This program prints the first 50 Fibonacci numbers starting with
 * 1 and 2
 *
 * Return: 0
 */
int main(void)
{
	int prev = 1, cur = 2, n = 50;

	printf("%d", prev);
	n--;

	while (n > 0)
	{
		int temp = prev + cur;

		printf(", %d", cur);
		prev = cur;
		cur = temp;

		n--;
	}

	putchar('\n');

	return (0);
}
