#include "3-calc.h"
#include "stdio.h"
#include "string.h"
#include "stdlib.h"

/**
 * main - Program that performs simple operations specified
 *        by command line arguments i.e. calc num1 operator num2
 *
 * @argc: int
 * @argv: char**
 * Return: 0 if the program executes successfully.
 *         98 if the wrong number of arguments is passed.
 *         99 if the operator is not valid.
 *         100 if the user tries to divide or modulo by 0.
 */
int main(int argc, char **argv)
{
	int num1, num2, is_div_or_mod, (*op_func)(int, int);
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	op_func = get_op_func(op);
	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	is_div_or_mod = strcmp(op, "/") == 0 || strcmp(op, "%") == 0;
	if (is_div_or_mod && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", op_func(num1, num2));

	return (0);
}
