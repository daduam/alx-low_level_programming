#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: int
 * Return: factorial of @n. If n is lower than 0, returns -1 to indicate an error
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
