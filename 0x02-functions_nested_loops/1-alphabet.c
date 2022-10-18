#include "main.h"

/**
 * print_alphabet - Print lowercase English alphabets
 *
 * Return: void
 */
void print_alphabet(void)
{
	int i;
	char *str = "abcdefghijklmnopqrstuvwxyz\n";

	for (i = 0; i < 27; i++)
	{
		_putchar(str[i]);
	}
}
