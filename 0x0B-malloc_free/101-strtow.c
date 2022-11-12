#include "main.h"
#include "stdlib.h"
#include "string.h"

/**
 * count_words - Counts the number of space separated words in string
 *
 * @str: char*
 * Return: int
 */
int count_words(char *str)
{
	int n;

	while (*str != '\0')
	{
		if (*str == ' ')
		{
			str++;
		}
		else
		{
			n++;

			while (*str != ' ' && *str != '\0')
				str++;
		}
	}

	return (n);
}

/**
 * strtow - splits a string into words.
 *
 * @str: char*
 * Return: char**
 */
char **strtow(char *str)
{
	int a, i, j, k, n;
	char **p;

	if (str == NULL || strlen(str) == 0)
		return (NULL);

	n = count_words(str);

	if (n == 0)
		return (NULL);

	p = malloc(sizeof(char *) * (n + 1));

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	i = 0;
	for (j = 0; str[j] != '\0'; j++)
	{
		if (str[j] == ' ')
			continue;

		for (k = 0; str[j + k] != ' ' && str[j + k] != '\0'; k++)
			;

		p[i] = malloc(sizeof(char) * k);

		if (p[i] == NULL)
		{
			for (a = 0; a <= i; a++)
				free(p[a]);
			free(p);
		}

		for (k = 0; str[j] != ' ' && str[j] != '\0'; j++, k++)
			p[i][k] = str[j];
		i++;
	}
	p[i] = NULL;

	return (p);
}
