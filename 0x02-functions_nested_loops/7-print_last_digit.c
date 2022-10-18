#include "main.h"

/**
 * print_last_digit - Print the last digit of a number
 * @n: the number of interest
 *
 * Return: The last digit of n
 */
int print_last_digit(int n)
{
	int ret = n % 10;

	if (ret < 0)
		ret *= -1;
	_putchar(ret + '0');
	return (ret);
}
