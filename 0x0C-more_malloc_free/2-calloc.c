#include <stdlib.h>
#include "main.h"
/**
 * _calloc - a C program that allocates memory for an array, using malloc.
 * @nmemb: A given number of the emlements in the array
 * @size: A given size of each element in the array
 * Return: A pointer to allocated memory
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	int i = 0, r = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	r = nmemb * size;
	s = malloc(r);

	if (s == NULL)
		return (NULL);

	for (; i < r; i++)
		s[i] = 0;

	return (s);
}
