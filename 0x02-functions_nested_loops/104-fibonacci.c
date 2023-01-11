#include "stdio.h"

#define FIB_B_LIMIT 10000000000UL

/**
 * move - move values over
 *
 * @a: ulong
 * @b: ulong
 * @temp: ulong
 */
void move(unsigned long int *a, unsigned long int *b, unsigned long int *temp)
{
	*a = *b;
	*b = *temp;
}

/**
 * main - Prints the first 98 Fibonacci numbers starting with 1 and 2
 *
 * Return: 0
 */
int main(void)
{
	int i;
	unsigned long int fib1a = 0, fib1b = 1;
	unsigned long int fib2a = 0, fib2b = 2;
	unsigned long int tempa = 0, tempb = 0, carry = 0;

	printf("%lu, %lu, ", fib1b, fib2b);
	for (i = 2; i < 98; i++)
	{
		if (fib1b + fib2b > FIB_B_LIMIT || fib1a || fib2a)
		{
			carry = (fib1b + fib2b) / FIB_B_LIMIT;
			tempa = fib1a + fib2a + carry;
			tempb = (fib1b + fib2b) % FIB_B_LIMIT;
			move(&fib1a, &fib2a, &tempa);
			move(&fib1b, &fib2b, &tempb);
			printf("%lu%010lu", fib2a, fib2b);
		}
		else
		{
			tempb = fib1b + fib2b;
			move(&fib1b, &fib2b, &tempb);
			printf("%lu", fib2b);
		}
		if (i < 97)
			printf(", ");
		else
			printf("\n");
	}

	return (0);
}
