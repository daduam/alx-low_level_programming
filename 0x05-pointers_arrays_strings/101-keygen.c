#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#include "time.h"

/**
 * rand_range - returns a pseudo-random integer in the range [lower, upper]
 *
 * @lower: lower limit.
 * @upper: upper limit.
 * Return: random int in the closed range [lower, upper].
 */
int rand_range(int lower, int upper)
{
	return ((rand() % (upper - lower + 1)) + lower);
}

/**
 * main - generates random valid passwords for the program 101-crackme
 *
 * Return: always 0
 */
int main(void)
{
	int i = 0, sum = 0, choice;
	char key[100];

	srand(time(NULL));
	while (1)
	{
		choice = rand_range(32, 126);
		sum += choice;
		key[i++] = (char)choice;
		if (sum > 2772)
		{
			strcpy(key, "");
			i = 0;
			sum = 0;
		}
		else if (sum == 2772)
		{
			key[i] = '\0';
			printf("%s", key);
			exit(0);
		}
	}
}
