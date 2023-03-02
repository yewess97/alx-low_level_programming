#include "main.h"
/**
 * leet - a C program that encodes a string into 1337.
 * @str: The string to be checked
 * Return: A pointer to the string
 **/
char *leet(char *str)
{
	int i, j;
	char letters[] = "aAeEoOtTlL", nums[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == letters[j])
				str[i] = nums[j];
		}
	}

	return (n);
}
