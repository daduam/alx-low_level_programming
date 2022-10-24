#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int a = 0, b = 0;

	while (*(s + b) != '\0')
	{
		b++;
	}

	b--;

	while (a < b)
	{
		char temp = s[a];

		s[a] = s[b];
		s[b] = temp;
		a++, b--;
	}
}
