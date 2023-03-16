#include <stdlib.h>
#include "main.h"
/**
 * array_range - a C program that creates an array of integers.
 * @min: A given minimum range of values to be stored
 * @max: A given maximum range of values to be stored and the number of elements
 * Return: A pointer to the newly created array
 **/
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		ptr[i] = min++;
	return (ptr);
}
