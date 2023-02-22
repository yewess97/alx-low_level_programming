#include <stdio.h>
/**
 * main - a C program that prints the sum of the even-valued terms.
 * description: not exceeding 4,000,000.
 * Return: 0 (For Success)
 **/
int main(void)
{
	int i;
	long j = 1, k = 2, sum = k;

	for (i = 0; k + j < 4000000; i++)
	{
		k += j;
		if (k % 2 == 0)
			sum += k;
		j = k - j;
	}
	printf("%ld\n", sum);

	return (0);
}
