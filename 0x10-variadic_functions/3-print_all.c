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

	while (format != NULL && (c = format[i++]) != '\0')
	{
		n += c == 'c';
		n += c == 'i';
		n += c == 'f';
		n += c == 's';
	}

	return (n);
}

/**
 * print_str - Print string from va_list
 *
 * @ap: va_list
 */
void print_str(va_list ap)
{
	char *s = va_arg(ap, char *);

	if (s != NULL)
	{
		printf("%s", s);
		return;
	}
	printf("(nil)");
}

/**
 * print_all - Prints anything.
 *
 * @format: A list of types of arguments passed to the function.
 */
void print_all(const char *const format, ...)
{
	va_list ap;
	int c, n, i = 0;

	va_start(ap, format);
	n = count_tokens(format);
	while (format != NULL && format[i] != '\0')
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
			print_str(ap);
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
