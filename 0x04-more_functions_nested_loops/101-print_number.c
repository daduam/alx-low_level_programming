#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
	int mask = 1000000000, good_zero = 0, i;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	while (mask)
	{
		if (n < 10)
		{
			_putchar(n + '0');
			break;
		}

		i = n / mask;

		if (good_zero || i > 0)
		{
			_putchar(i + '0');
			n %= mask;
			good_zero = 1;
		}

		mask /= 10;
	}
}
