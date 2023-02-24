#include <stdio.h>
#include "main.h"
/**
 * main - a C program that prints the largest prime factor of the number 612852475143.
 * Return: 0 (For Success)
 **/
int main(void)
{
	unsigned long i, max, num = 612852475143;
	double square = sqrt(num);

	for (i = 1; i <= square; i++)
	{
		if (num % i == 0)
			max = num / i;
	}
	printf("%lu", max);

	return (0);
}
