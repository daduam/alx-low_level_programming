#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to be concatenated to
 * @src: string to be append to dest
 * Return: char*
 */
char *_strcat(char *dest, char *src)
{
	int n, i;

	for (n = 0; dest[n] != '\0'; n++)
		;

	for (i = 0; src[i] != '\0'; i++)
		dest[n + i] = src[i];

	dest[n + i] = '\0';

	return (dest);
}
