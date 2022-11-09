#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: char*
 * @accept: bytes to accept
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, flag = 1, count = 0;

	while (*s != '\0' && flag)
	{
		for (i = 0, flag = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				flag = 1;
				s++;
				count++;
				break;
			}
		}
	}

	return (count);
}
