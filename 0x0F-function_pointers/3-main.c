#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - a C program that prints the result of the simple operations.
 * @argc: The number of arguments supplied to the program
 * @argv: An array of pointers to the arguments
 * Return: 0 (For Success)
 **/
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	int num1 = atoi(argv[1]), num2 = atoi(argv[3]);
        char *op = argv[2];

	if (op[1] || !get_op_func(op))
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(num1, num2));

	return (0);
}
