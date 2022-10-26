#include "main.h"

/**
 * leet - encodes a string into leet
 * @s: string to encode
 * Return: char*
 */
char *leet(char *s)
{
	int i, j;

	char *letters = "aAeEoOtTlL";
	char *replace = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; letters[j] != '\0'; j++)
			if (s[i] == letters[j])
				s[i] = replace[j];

	return (s);
}
