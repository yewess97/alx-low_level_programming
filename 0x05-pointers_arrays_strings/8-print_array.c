#include <stdio.h>
#include "main.h"
/**
 * print_array - a C program that prints n elements of an array of integers
 * @a: The array of numbers
 * @n: The number of elements of the array to be printed
 **/
void print_array(int *a, int n)
{
	int j = 0;

	for (; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
