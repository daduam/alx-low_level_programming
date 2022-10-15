#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int c, d, e;

	for (c = '0'; c <= '9'; c++)
	{
		for (d = c + 1; d <= '9'; d++)
		{
			for (e = d + 1; e <= '9'; e++)
			{
				putchar(c);
				putchar(d);
				putchar(e);
				if (c < '7')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
