#include "main.h"
#include "stdio.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string to be transformed
 * Return: char*
 */
char *cap_string(char *s)
{
	int i, j, cap = 1;

	char *sep = " \t\n,;.!?\"(){}";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (cap && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] + 'A' - 'a';
		}

		cap = 0;

		for (j = 0; sep[j] != '\0'; j++)
		{
			if (s[i] == sep[j])
			{
				cap = 1;
				break;
			}
		}
	}

	return (s);
}
