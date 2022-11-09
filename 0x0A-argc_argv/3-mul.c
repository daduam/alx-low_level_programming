#include "stdio.h"
#include "stdlib.h"

/**
 * main - Program that multiplies two numbers
 * @argc: int
 * @argv: char**
 * Return: 0. Otherwise 1 if fewer than two arguments are passed
 */
int main(int argc, char **argv)
{
	if (argc < 3)
	{
		puts("Error");
		return (1);
	}

	printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));

	return (0);
}
