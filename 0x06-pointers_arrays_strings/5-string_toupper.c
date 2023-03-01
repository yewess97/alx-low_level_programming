#include "main.h"
/**
 * string_toupper - a C program that changes all lowercase letters
 * of a string to uppercase.
 * @str: The string to be changed
 * Return: A pointer to the changed string
 **/
char *string_toupper(char *str)
{
	int i = 0;

	for (; str[i] >= 'a' && str[i] <= 'z'; i++)
	{
		str[i] -= 32;
	}

	return (str);
}
