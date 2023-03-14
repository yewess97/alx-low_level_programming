#include <stdlib.h>
#include "main.h"
/**
 * create_array - a C program that creates an array of chars,
 * and initializes it with a specific char.
 * @size: The size of the array
 * @c: The character that to be filled in the array
 * Return: A pointer to the array, or NULL if it fails
 **/
char *create_array(unsigned int size, char c)
{
	char *buffer = malloc(size * sizeof(c));
	unsigned int i;

	if (size == 0)
		return (NULL);

	if (buffer == NULL)
		return (NULL);

	for (i = 0; i  < size; i++)
		buffer[i] = c;

	return (buffer);
}
