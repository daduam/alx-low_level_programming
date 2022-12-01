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
	unsigned int b = (n >> index) & 1;

	if (b != 1 && b != 0)
		return (-1);

	return (b);
}
