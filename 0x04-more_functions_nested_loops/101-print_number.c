#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar(45);
		n *= -1;
	}

	if (n / 10)
		print_number(n / 10);

	_putchar(n % 10 + 48);
}
