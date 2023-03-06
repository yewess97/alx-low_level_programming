#include "main.h"
/**
 * _memset - a C program that fills memory with a constant byte.
 * @s: Pointed destination
 * @b: A constant byte
 * @n: A number of bytes
 * Return: A pointer to the memory area (s)
 **/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
