#include <stdlib.h>
#include "main.h"
/**
 * _strdup - a C program that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 * @str: The string to be allocated
 * Return: A pointer to a newly allocated space in memory
 **/
char *_strdup(char *str)
{
	char *s;
	unsigned int i = 1, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[i])
		i++;

	s = malloc((sizeof(char) * i) + 1);

	if (s == NULL)
		return (NULL);

	for (; i > len; len++)
		s[len] = str[len];

	s[len] = '\0';

	return (s);
}
