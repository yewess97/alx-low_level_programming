#include "main.h"

/**
 * _strlen_recursion - a C program that returns the length
 * of the given string.
 * @s: A given string
 * Return: The length of (s)
 */
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen_recursion(++s));
}

/**
 * comparator - a C program that compares each character of the string.
 * @s: A given string
 * @i: The iterator
 * Return: 1 (if a string is a palindrome), 0 (if not)
 */

int comparator(char *s, int i)
{
	if (i < 1)
		return (1);

	if (*s == *(s + i))
		return (comparator(++s, i - 2));

	return (0);
}

/**
 * is_palindrome - a C program that detects if the given string
 * is palindrom or not.
 * @s: A given string
 * Return: 1 (if a string is a palindrome), 0 (if not)
 */
int is_palindrome(char *s)
{
	return (comparator(s, _strlen_recursion(s) - 1));
}
