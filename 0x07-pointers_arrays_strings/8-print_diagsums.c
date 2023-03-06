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
	int i, j, sum1 = 0, sum2 = 0;

	for (i = 0; i <= (size * size); i += size + 1)
	{
		sum1 += a[i];
	}

	for (j = size - 1; j <= (size * size) - size; j += size - 1)
	{
		sum2 += a[j];
	}

	printf("%d", "%d\n", sum1, sum2);
}
