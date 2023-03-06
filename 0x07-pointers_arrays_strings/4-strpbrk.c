#include "main.h"
/**
 * _strpbrk - a C program that searches a string for any of a set of bytes.
 * @s: The input string
 * @accept: The input string that be checked in (s)
 * Return: A pointer to the byte in (s)
 * that matches one of the bytes in accept,
 * or NULL if no such byte is found
 **/
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
				break;
		}
		return (s + i);
	}

	return (NULL);
}
