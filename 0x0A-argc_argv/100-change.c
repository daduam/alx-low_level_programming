#include "stdio.h"
#include "stdlib.h"

/**
 * main - Program that prints the minimum number of coins to make
 *        change for an amount of money.
 * @argc: int
 * @argv: char**
 * Return: 0. Otherwise 1 if number of arguments passed is not exactly 1.
 */
int main(int argc, char **argv)
{
	int coins[] = {25, 10, 5, 2, 1};

	int i, count, change;

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}

	count = 0;
	change = atoi(argv[1]);

	if (change < 0)
	{
		puts("0");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		if (coins[i] <= change)
		{
			count += (change / coins[i]);
			change = change % coins[i];
		}
	}

	printf("%d\n", count);

	return (0);
}
