#include "main.h"
/**
 * _strncat - a C program that concatenates two strings.
 * @dest: The destination string
 * @src: The source string
 * @n: The number of bytes from src to be appended to the dest
 * Return: A pointer to the resulting string dest
 **/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, destLen = 0;

	while (dest[i])
	{
		destLen++;
	}
	for (; src[i] && i < n; i++)
	{
		dest[destLen++] = src[i];
	}

	return (dest);
}
