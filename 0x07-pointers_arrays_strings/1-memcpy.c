#include "main.h"
/**
 * _memcpy - a C program that copies memory area.
 * @dest: The destination memory area
 * @src: The source memory area
 * @n: A number of bytes
 * Return: A pointer to dest
 **/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
