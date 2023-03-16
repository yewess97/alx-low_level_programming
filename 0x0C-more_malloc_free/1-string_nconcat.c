#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - a C program that concatenates two strings.
 * @s1: A given string to be appended to
 * @s2: A given string to be concatenated with (s1)
 * @n: A given number of bytes needed from (s2)
 * to concatenate to (s1)
 * Return: A pointer that points to a newly allocated space in memory,
 * which contains (s1), followed by the first (n) bytes of (s2),
 * If the function fails, it should return NULL
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;

	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		s = malloc(sizeof(char) * (len1 + n + 1));
	else
		s = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!s)
		return (NULL);

	for (i = 0; i < len1; i++)
		s[i] = s1[i];

	while (n < len2 && i < (len1 + n))
		s[i++] =  s2[j++];

	while (n >= len2 && i < (len1 + len2))
		s[i++] = s2[j++];

	s[i] = '\0';

	return (s);
}
