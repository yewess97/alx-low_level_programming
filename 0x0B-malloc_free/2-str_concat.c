#include <stdlib.h>
#include "main.h"
/**
 * str_concat - a C program that concatenates two strings.
 * @s1: The first given string to be concatenated with the second one
 * @s2: The second given string to be concatenated with the first one
 * Return: A pointer that  points to a newly allocated space in memory
 * which contains the contents of s1, followed by the contents of s2,
 * and null terminated
 **/
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, size = 0, len = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[j])
		j++;

	len = i + j;
	s = malloc((sizeof(char) * len) + 1);

	if (s == NULL)
		return (NULL);

	for (j = 0; size < len; size++)
	{
		if (size <= i)
			s[size] = s1[size];

		if (size >= i)
		{
			s[size] = s2[j];
			j++;
		}
	}

	s[size] = '\0';

	return (s);
}
