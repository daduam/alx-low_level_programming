#include "main.h"

/**
 * flip_bits - Count the number of bits which should be flipped to get
 *             from one number to another.
 *
 * @n: From number
 * @m: To number
 * Return: Number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int d = 0;

	while (n > 0 || m > 0)
	{
		if ((n & 1) != (m & 1))
			d += 1;

		n = n >> 1;
		m = m >> 1;
	}

	return (d);
}
