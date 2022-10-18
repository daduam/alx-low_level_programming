#include "main.h"

/**
 * print_alphabet_x10 - Print lowercase English alphabets 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i, j;
	char *str = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 26; j++)
		{
			_putchar(str[j]);
		}
		_putchar('\n');
	}
}
