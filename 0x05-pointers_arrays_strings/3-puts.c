#include "main.h"
/**
 * _strlen - a C program that returns the length of a string.
 * @s: The string of which we want to return the length
 **/
int _strlen(char *s)
{
	size_t len = 0;

	while (*s++)
	{
		len++;
	}
	return (len);
}
