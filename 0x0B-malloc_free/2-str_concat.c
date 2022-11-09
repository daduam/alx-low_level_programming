#include "main.h"
#include "string.h"
#include "stdlib.h"

/**
 * str_concat - concatenates two strings.
 *
 * @s1: char*
 * @s2: char*
 * Return: The returned pointer should point to a newly allocated space
 *         in memory which contains the contents of s1, followed by the
 *         contents of s2, and null terminated.
 *         The function returns NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i = 0;
	int n1 = strlen(s1);
	int n2 = strlen(s2);

	s = malloc(sizeof(char) * (n1 + n2 + 1));

	if (s == NULL)
		return (NULL);

	while (*s1 != '\0')
		s[i++] = *s1++;

	while (*s2 != '\0')
		s[i++] = *s2++;

	s[i] = '\0';

	return (s);
}
