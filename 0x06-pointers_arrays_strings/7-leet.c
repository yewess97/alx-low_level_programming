#include "main.h"
/**
 * leet - a C program that encodes a string into 1337.
 * @n: The input value
 * Return: The n value
 **/
char *leet(char *n)
{
	int i = 0, j = 0;
	char s1[] = "aAeEoOtTlL", s2[] = "4433007711";

	for (; n[i] != '\0'; i++)
	{
		for (; j < 10; j++)
		{
			if (n[i] == s1[j])
				n[i] = s2[j]
		}
	}

	return (n);
}
