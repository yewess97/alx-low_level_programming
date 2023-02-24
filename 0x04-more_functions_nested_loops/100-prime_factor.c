#include <stdio.h>
#include <math.h>
/**
 * main - a C program that prints largest prime factor of number 612852475143.
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
	printf("%lu\n", max);

	return (0);
}
