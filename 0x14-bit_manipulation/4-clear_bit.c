#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 *
 * @n: Address of number to update.
 * @index: The index, starting from 0 of the bit you want to set.
 * Return: 1 on success, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
		return (-1);

	*n = (*n) & ~(1 << index);

	return (1);
}
