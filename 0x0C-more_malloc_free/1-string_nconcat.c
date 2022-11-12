#include "main.h"
#include "stdlib.h"
#include "string.h"

/**
 * string_nconcat - concatenates two strings.
 *
 * @s1: char*
 * @s2: char*
 * @n: int
 * Return: NULL if the function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;

	unsigned int i, j;
	unsigned int n1 = s1 == NULL ? 0 : strlen(s1);
	unsigned int n2 = s2 == NULL ? 0 : strlen(s2);

	n2 = n > n2 ? n2 : n;

	s = malloc(n1 + n2 + 1);

	if (s != NULL)
	{
		for (i = 0, j = 0; j < n1; i++, j++)
			s[i] = s1[j];

		for (j = 0; j < n2; i++, j++)
			s[i] = s2[j];

		s[i] = '\0';
	}

	return (s);
}
