#include "main.h"
/**
 * wildcmp - a C program that compares two strings
 * and returns 1 if the strings can be considered identical,
 * otherwise return 0.
 * @s1: A given first string
 * @s2: A given second string (it can contain the special character *)
 * Return: 1 (if the strings can be considered identical), 0 (otherwise)
 **/
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s1 == '\0' && *(s2 + 1) != '\0' && *s2 == '*')
		return (0);

	if (*s1 == *s2)
		return (wildcmp(++s1, ++s2));

	if (*s2 == '*')
		return (wildcmp(++s1, s2) || wildcmp(s1, ++s2));

	return (0);
}
