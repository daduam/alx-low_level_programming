#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 1
 */
int main(void)
{
	int n;
	int nlast;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	nlast = n % 10;

	printf("Last digit of %d is %d ", n, nlast);
	if (nlast > 5)
		printf("and is greater than 5\n");
	else if (nlast == 0)
		printf("and is 0\n");
	else
		printf("and is less than 6 and not 0\n");

	return (0);
}
