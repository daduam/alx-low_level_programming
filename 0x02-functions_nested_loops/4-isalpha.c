#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: character to be checked
 *
 * Return: 1 if character is alphabetic and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	return (0);
}
