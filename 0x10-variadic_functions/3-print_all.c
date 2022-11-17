#include "variadic_functions.h"
#include "stdarg.h"
#include "stdio.h"

/**
 * print_all - Prints anything.
 *
 * @format: A list of types of arguments passed to the function.
 */
void print_all(const char *const format, ...)
{
	va_list ap;
	char c;
	int i, n;

	i = n = 0;
	while ((c = format[i++]) != '\0')
	{
		if (c == 'c' || c == 'i' || c == 'f' || c == 's')
			n++;
	}

	va_start(ap, format);
	i = 0;
	while (format[i] != '\0')
	{
		c = format[i++];
		switch (c)
		{
		case 'c':
			printf("%c", va_arg(ap, int));
			break;
		case 'i':
			printf("%d", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		case 's':
			printf("%s", va_arg(ap, char *));
			break;
		default:
			continue;
		}
		if (n > 1)
			printf(", ");
		n--;
	}
	printf("\n");
	va_end(ap);
}
