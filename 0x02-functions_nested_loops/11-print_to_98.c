#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: From number
 */
void print_to_98(int n)
{
	int increment = (n < 98);

	while (n != 98)
	{
		printf("%d, ", n);
		if (increment)
			n++;
		else
			n--;
	}

	printf("98\n");
}
