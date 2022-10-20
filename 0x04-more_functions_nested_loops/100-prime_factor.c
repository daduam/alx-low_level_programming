#include "stdio.h"

/**
 * main - prints the largest prime factor of the number 612852475143
 * Return: Always 0
 */
int main(void)
{
	long int i, n = 612852475143, p = 2;

	for (i = 3; i * i <= n; i += 2)
	{
		if (n % i == 0)
		{
			p = i;

			while (n % i == 0)
				n /= i;
		}
	}

	if (n > 1)
		p = n;

	printf("%ld\n", p);

	return (0);
}
