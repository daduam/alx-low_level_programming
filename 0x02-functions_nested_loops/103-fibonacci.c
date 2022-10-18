#include <stdio.h>

/**
 * main - Prints the sum even-valued terms of the Fibonacci sequence
 * starting with 1 and 2, and less than 4,000,000
 *
 * Return: 0
 */
int main(void)
{
	long int prev = 1, cur = 2, temp, sum = 0;

	while (cur <= 4000000)
	{
		if (cur % 2 == 0)
			sum += cur;

		temp = prev + cur;
		prev = cur;
		cur = temp;
	}

	printf("%ld\n", sum);

	return (0);
}
