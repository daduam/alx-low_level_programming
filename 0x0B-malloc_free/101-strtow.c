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
 * free_mem - frees a 2 dimensional grid.
 *
 * @grid: int**
 * @height: int
 */
void free_mem(char **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}

/**
 * strtow - splits a string into words.
 *
 * @str: char*
 * Return: char**
 */
char **strtow(char *str)
{
	int word, k, n;
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

	word = 0;
	while (*str != '\0')
	{
		if (*str == ' ')
		{
			str++;
			continue;
		}
		for (k = 0; str[k] != ' ' && str[k] != '\0'; k++)
			;
		p[word] = malloc(sizeof(char) * (k + 1));
		if (p[word] == NULL)
		{
			free_mem(p, word + 1);
			return (NULL);
		}
		for (k = 0; *str != ' ' && *str != '\0'; k++)
			p[word][k] = *str++;
		word++;
	}
	p[word] = NULL;

	return (p);
}
