#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: number of bytes of src to use
 * Return: char*
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, ndest;

	for (ndest = 0; dest[ndest] != '\0'; ndest++)
		;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[ndest + i] = src[i];
	dest[ndest + i] = '\0';

	return (dest);
}
