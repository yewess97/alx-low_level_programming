#include "main.h"
/**
 * _strcat - a C program that concatenates two strings.
 * @dest: The destination string
 * @src: The source string
 * Return: A pointer to the resulting string dest
 **/
char *_strcat(char *dest, char *src)
{
	int i = 0, destLen = 0;

	while (dest[destLen])
	{
		destLen++;
	}
	for (; src[i] != 0; i++)
	{
		dest[destLen] = src[i];
		destLen++;
	}
	dest[destLen] = '\0';

	return (dest);
}
