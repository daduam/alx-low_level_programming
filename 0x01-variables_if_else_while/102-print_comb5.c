#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int c, d;

	for (c = 0; c < 100; c++)
	{
		for (d = c + 1; d < 100; d++)
		{
			putchar(c / 10 + '0');
			putchar(c % 10 + '0');
			putchar(' ');
			putchar(d / 10 + '0');
			putchar(d % 10 + '0');
			if (c < 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
