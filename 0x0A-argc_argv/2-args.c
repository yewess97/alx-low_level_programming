#include <stdio.h>
#include "main.h"
/**
 * main - a C program that prints all arguments it receives.
 * @argc: The number of arguments
 * @argv: The array of the arguments
 * Return: 0 (For Success)
 **/
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
