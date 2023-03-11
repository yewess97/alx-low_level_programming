#include <stdio.h>
#include "main.h"
/**
 * main - a C program that prints multiplies two numbers.
 * @argc: The number of arguments
 * @argv: The array of the arguments
 * Return: 0 (For Success), 1 (For Error)
 **/
int main(int argc, char *argv[])
{
	int num1 = 0, num2 = 0;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
