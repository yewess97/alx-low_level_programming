#include "main.h"
/**
 * _strspn - a C program that gets the length of a prefix substring.
 * @s: The input string
 * @accept: The input string that be checked in (s)
 * Return: The number of bytes in the initial segment of (s)
 * which consist only of bytes from (accept)
 **/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				n++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (n);
		}
		s++;
	}

	return (n);
}
