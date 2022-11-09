#include "stdio.h"
#include "stdlib.h"

/**
 * main - Program that adds positive numbers
 * @argc: int
 * @argv: char**
 * Return: 0. Otherwise 1 if one number contains non-digit symbols
 */
int main(int argc, char **argv)
{
	int i, num, sum = 0;

	if (argc == 1)
	{
		puts("0");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			num = atoi(argv[i]);

			if (num == 0)
			{
				puts("Error");
				return (1);
			}

			sum += num;
		}

		printf("%d\n", sum);
	}

	return (0);
}
