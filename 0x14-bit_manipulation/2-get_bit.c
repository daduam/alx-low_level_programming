#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index.
 *
 * @n: unsigned long int
 * @index: The index, starting from 0 of the bit to return.
 * Return: The value of the bit at index @index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int p = 1 << index;

	if (p > n)
		return (-1);

	return ((n & p) > 0);
}
