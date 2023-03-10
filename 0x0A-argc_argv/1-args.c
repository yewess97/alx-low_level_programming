#include <stdio.h>
#include "main.h"
/**
 * main - a C program that prints the number of arguments
 * passed into it.
 * @argc: The number of arguments
 * @argv: The array of the arguments
 * Return: 0 (For Success)
 **/
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
