#include "main.h"
/**
 * _strncpy - a C program that copies a string.
 * @dest: The destination buffer that storing the string copy
 * @src: The source string
 * @n: The max number of bytes to be copied from the src
 * Return: A pointer to the resulting string dest
 **/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, srcLen = 0;

	while (src[i++])
	{
		srcLen++;
	}
	for (; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (i = srcLen; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
