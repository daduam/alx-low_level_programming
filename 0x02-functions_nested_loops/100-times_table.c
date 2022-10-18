#include "main.h"

/**
 * print_times_table - Print the n times table
 * @n: The times table to be printed
 */
void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int mul = i * j;

			if (j > 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(mul < 100 ? (' ') : (mul / 100 + '0'));
				_putchar(mul < 10 ? (' ') : (mul / 10 % 10 + '0'));
				_putchar(mul % 10 + '0');
			}
			else
			{
				_putchar(mul + '0');
			}
		}
		_putchar('\n');
	}
}
