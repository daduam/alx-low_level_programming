#include "stdio.h"
#include "stdlib.h"

/**
 * main - Prints the opcodes of its own main function.
 *
 * @argc: int
 * @argv: char**
 * Return: 0 if the program executes successfully.
 *         1 if the user passes the wrong number of arguments.
 *         2 if the number of bytes is negative.
 */
int main(int argc, char **argv)
{
	int i, nbytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nbytes = atoi(argv[1]);
	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < nbytes; i++)
	{
		printf("%02hhx", *((char *)main + i));

		if (i + 1 < nbytes)
			printf(" ");
	}
	printf("\n");

	return (0);
}
