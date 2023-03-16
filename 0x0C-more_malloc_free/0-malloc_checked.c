#include "main.h"
/**
 * malloc_checked - a C program that allocates memory using malloc.
 * @b: The size of memory to be allocated
 * Return: A pointer to the allocated memory
 **/
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
