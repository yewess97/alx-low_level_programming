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
	int *arr, i = 0;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));

	if (!arr)
		return (NULL);

	while (i <= max - min)
		arr[i++] = min++;

	return (arr);
}
