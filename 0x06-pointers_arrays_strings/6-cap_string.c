#include "main.h"
#include "stdio.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string to be transformed
 * Return: char*
 */
char *cap_string(char *s)
{
	int i, j, cap_next = 0;

	char *sep = " \t\n,;.!?\"(){}";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (s[i] == sep[j])
			{
				cap_next = 1;
				break;
			}
		}

		if (cap_next && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] + 'A' - 'a';
			cap_next = 0;
		}

		if (sep[j] == '\0')
			cap_next = 0;
	}

	return (s);
}
