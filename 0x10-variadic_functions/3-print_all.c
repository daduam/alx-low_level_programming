#include "variadic_functions.h"
#include "stdarg.h"
#include "stdio.h"

/**
 * count_tokens - Counts format tokens in format string.
 *
 * @format: Format string.
 * Return: Number of tokens in format string.
 */
int count_tokens(const char *const format)
{
	int i = 0, n = 0, c;

	while ((c = format[i++]) != '\0')
	{
		n += c == 'c';
		n += c == 'i';
		n += c == 'f';
		n += c == 's';
	}

	return (n);
}

/**
 * print_all - Prints anything.
 *
 * @format: A list of types of arguments passed to the function.
 */
void print_all(const char *const format, ...)
{
	va_list ap;
	char *s;
	int c, i, n;

	n = count_tokens(format);

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
			s = va_arg(ap, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
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
