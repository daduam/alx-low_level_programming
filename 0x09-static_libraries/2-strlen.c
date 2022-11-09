#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: integer length of a string
 */
int _strlen(char *s)
{
	int n = 0;

	while (*s != '\0')
	{
		n++;
		s++;
	}

	return (n);
}
