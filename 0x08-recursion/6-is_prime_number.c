#include "main.h"

/**
 * _is_prime - recursively checks if @n is prime by trying to divide with @i
 * @n: int
 * @i: divisor
 * Return: 1 if @n is prime. 0 if otherwise
 */
int _is_prime(int n, int i)
{
	if (n % i == 0)
		return (0);

	if (i * i > n)
		return (1);

	return (_is_prime(n, i + 1));
}

/**
 * is_prime_number - checks if an integer is prime
 * @n: int
 * Return: 1 if @n is a prime number. 0 if otherwise
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
		return (0);

	if (n == 2)
		return (1);

	return (_is_prime(n, i));
}
