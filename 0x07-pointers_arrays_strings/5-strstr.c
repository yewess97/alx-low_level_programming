#include "main.h"
/**
 * _strstr - a C program that locates a substring.
 * @haystack: The input string
 * @needle: The input substring
 * Return: A pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 **/
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *str1 = haystack, *str2 = needle;

		while (*haystack != '\0' && *str2 != '\0' && *haystack == *str2)
		{
			haystack++;
			str2++;
		}

		if (*str2 == '\0')
			return (str1);

		haystack = str1 + 1;
	}

	return (0);
}
