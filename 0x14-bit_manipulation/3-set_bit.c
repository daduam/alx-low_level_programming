#include "main.h"

/**
 * set_bit - Sets the value of a bit at a given index to 1.
 *
 * @n: Address of number to update.
 * @index: Index, starting from 0, of the bit to be set.
 * Return: 1 on success, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
		return (-1);

	*n = (*n) | (1 << index);

	return (1);
}
