#include "main.h"

/**
 * main - entry point
 *
 * Return - 0
 */
int main(void)
{
	char *str = "_putchar\n";
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(str[i]);
	}

	return (0);
}
