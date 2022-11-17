#include "variadic_functions.h"
#include "stdarg.h"
#include "stdio.h"

/**
 * print_strings - Prints strings separated by @separator.
 *
 * @separator: The string to be printed between the strings.
 * @n: The number of strings to be passed to the function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *s;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);
		printf("%s", (s ? s : "(nil)"));
		if (i + 1 < n && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
