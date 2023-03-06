#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - a C program that prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: A pointer to the array
 * @size: The size of the array
 **/
void print_diagsums(int *a, int size)
{
	int i, size1 = 0;
	unsigned int sum1 = 0, sum2 = 0;

	size1 = (size * size) - 1;

	for (i = 0; i <= size1; i += (size + 1))
	{
		sum1 += a[i];
	}

	for (i = (size - 1); i < size1; i += (size - 1))
	{
		sum2 +=  a[i];
	}

	printf("%d, %d\n", sum1, sum2);
}
