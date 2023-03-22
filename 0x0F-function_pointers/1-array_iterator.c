#include "function_pointers.h"
/**
 * array_iterator - a C program that executes a function
 * given as a parameter on each element of an array.
 * @array: A given array of elements
 * @size: A given size of the (array)
 * @action: The function pointer
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array && size > 0 && action)
	{
		for (; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
