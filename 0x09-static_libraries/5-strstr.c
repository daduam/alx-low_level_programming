#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to search
 * @needle: target string
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, len = 0;

	while (needle[len] != '\0')
		len++;

	while (*haystack != '\0')
	{
		for (i = 0; needle[i] != '\0'; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}

		if (i == len)
			return (haystack);

		haystack++;
	}

	return ((void *)0);
}
