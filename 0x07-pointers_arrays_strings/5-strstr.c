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
	for (; *haystack != '\0'; haystack++)
	{
		char *str1 = haystack, *str2 = needle;

		while (*str1 == *str2 && *str2 != '\0')
		{
			*str1++;
			*str2++;
		}

		if (*str2 != '\0')
			return (haystack);
	}

	return (NULL);
}
