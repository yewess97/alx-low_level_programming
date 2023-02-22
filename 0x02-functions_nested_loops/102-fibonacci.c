#include <stdio.h>
/**
 * main - a C program that prints the first 50 Fibonacci numbers.
 * description: starting with 1 and 2.
 * Return: 0 (For Success)
 **/
int main(void)
{
	int i;
	long j = 1, k = 2;

	for (i = 0; i < 50; i++)
	{
		if (i == 0)
			printf("%ld", j);
		else if (i == 1)
			printf(", %ld", k);
		else
		{
			k += j;
			j = k - j;
			printf(", %ld", k);
		}
	}
	printf("\n");

	return (0);
}
