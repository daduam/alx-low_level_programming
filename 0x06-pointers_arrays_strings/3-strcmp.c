#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: -1 if s1 is less than s2, 1 if s1 is greater than s2,
 * and 0 if s1 and s2 are equal
 */
int _strcmp(char *s1, char *s2)
{
	for (; *s1 == *s2; s1++, s2++)
		if (*s1 == '\0')
			return (0);

	return (*s1 - *s2);
}
