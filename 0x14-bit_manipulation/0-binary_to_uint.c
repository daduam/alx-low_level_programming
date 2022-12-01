#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 *
 * @b: Pointer to a char* of 0 and 1 chars representing a number in binary.
 * Return: The converted number, or 0 if b is NULL or there is one or more
 *         chars in the string b that is not 0 or 1.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int d, nchars, multiplier;

	if (b == 0)
		return (0);

	for (nchars = 0; b[nchars] != '\0'; nchars++)
		if (b[nchars] != '0' && b[nchars] != '1')
			return (0);

	for (d = 0, multiplier = 1; nchars > 0; nchars -= 1, multiplier *= 2)
		d += multiplier * (b[nchars - 1] - '0');

	return (d);
}
