#include "main.h"
/**
 * _strlen_recursion - a C program that returns the length of a string.
 * @s: The input string to return its length
 * ٌReturn: The length of a string
 **/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
