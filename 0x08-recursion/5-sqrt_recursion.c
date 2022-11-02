#include "main.h"

/**
 * _sqrt - recursively guesses the natural square root of @n
 * @n: int
 * @root: guess
 * Return: natural square root of @n if it has one. -1 if otherwise
 */
int _sqrt(int n, int root)
{
	if (n == root * root)
		return (root);

	if (n / 2 == root)
		return (-1);

	return (_sqrt(n, root + 1));
}

/**
 * _sqrt_recursion - computes the natural square root of @n
 * @n: int
 * Return: natural square root of @n if it has one. -1 if otherwise
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (_sqrt(n, root));
}
