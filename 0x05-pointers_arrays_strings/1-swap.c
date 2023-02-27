#include "main.h"
/**
 * swap_int - a C program that swaps the values of two integers.
 * @a: The first number to be swapped.
 * @b: The second number to be swapped.
 **/
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
