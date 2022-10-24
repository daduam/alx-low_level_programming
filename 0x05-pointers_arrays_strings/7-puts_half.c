#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string
 */
void puts_half(char *str)
{
	int n = 0, i;

	while (*(str + n) != '\0')
		n++;

	for (i = (n / 2) + (n & 1); i < n; i++)
		_putchar(str[i]);

	_putchar('\n');
}
