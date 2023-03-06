#include <stdio.h>
#include "main.h"
/**
 * _strchr - a C program that locates a character in a string.
 * @s: The input string
 * @c: The input character
 * Return: A pointer to the first occurrence
 * of the character c in the string s,
 * or NULL if the character is not found
 **/
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return (NULL);
}
