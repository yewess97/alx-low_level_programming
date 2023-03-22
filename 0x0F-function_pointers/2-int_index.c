#include "function_pointers.h"
/**
 * int_index - a C program that searches for an integer.
 * @array: A given array of integers
 * @size: The number of elements in the (array)
 * @cmp: A pointer to the function that is used to compare the values
 * Return: The index of first element
 * for which the cmp function does not return 0
 * -1 (If no element matches) and (If size <= 0)
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size > 0 && cmp)
	{
		for (; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}

	return (-1);
}
