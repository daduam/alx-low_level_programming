#include "main.h"

/**
 * times_table - Print the 9 times table
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int mul = i * j;

			if (j > 0)
			{
				_putchar(' ');
				_putchar(mul < 10 ? ' ' : (mul / 10 + '0'));
			}

			_putchar(mul % 10 + '0');

			if (j < 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
