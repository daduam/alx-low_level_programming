#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line
 * @str: string to be printed
 */
void puts2(char *str)
{
	int n = 0, i = 0;

	while (*(str + n) != '\0')
		n++;

	while (i < n)
	{
		_putchar(str[i]);
		i += 2;
	}

	_putchar('\n');
}
