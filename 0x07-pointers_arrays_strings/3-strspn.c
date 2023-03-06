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
	unsigned int i, n, check, value = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		check = 0;

		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
			{
				value++;
				check = 1;
			}
		}
	}
}
