#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: set of bytes
 * Return: Returns a pointer to the byte in s that matches one of the bytes
 * in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	while (*s++ != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
			if (*s == accept[i])
				return (s);
	}

	return ((void *)0);
}
