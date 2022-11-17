#include "variadic_functions.h"
#include "stdarg.h"
#include "stdio.h"

/**
 * print_numbers - Prints parameters formatted by @separator.
 *
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i + 1 < n && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
