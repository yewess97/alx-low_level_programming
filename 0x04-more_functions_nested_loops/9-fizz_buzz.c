#include <stdio.h>
#include "main.h"
/**
 * main - a C program that prints the numbers from 1 to 100 for Fizz Buzz.
 * Return: 0 (For Success)
 **/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz");
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
	}
	printf("\n");

	return (0);
}
