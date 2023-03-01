#include "main.h"
/**
 * reverse_array - a C program that reverses the content of an array of integers.
 * @a: The array of integers to be reversed
 * @n: The number of the elements in the array
 **/
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = n - 1; i >= n/2; i--)
	{
		temp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = temp;
	}
}
