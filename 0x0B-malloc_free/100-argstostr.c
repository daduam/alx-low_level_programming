#include "main.h"
#include "stdlib.h"
#include "string.h"

/**
 * argstostr - concatenates all the arguments of your program.
 *
 * @ac: int
 * @av: char**
 * Return: char*
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, n = 0;
	char *p;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		n += strlen(av[i]) + 1;
	}

	p = malloc(n + 1);

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			p[k++] = av[i][j];
		}
		p[k++] = '\n';
	}

	p[k] = '\0';

	return (p);
}
