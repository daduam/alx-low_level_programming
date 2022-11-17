#include "variadic_functions.h"
#include "stdarg.h"

/**
 * sum_them_all - Calculates the sum of all its parameters.
 *
 * @n: Number of parameters
 * Return: Sum of all its parameters. 0 if n is 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum;
	unsigned int i;

	va_start(ap, n);
	for (i = 0, sum = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);

	return (sum);
}
