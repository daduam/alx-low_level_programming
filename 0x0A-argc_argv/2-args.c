#include "stdio.h"

/**
 * main - Program that prints all the arguments it receives
 * @argc: int
 * @argv: char**
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		puts(argv[i]);

	return (0);
}
