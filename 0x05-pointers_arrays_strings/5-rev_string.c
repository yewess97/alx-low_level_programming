#include "main.h"
/**
 * rev_string - a C program that reverses a string.
 * @s: The string to be reversed
 **/
void rev_string(char *s)
{
	char temp;
	int index = 0, length = 0;

	while (s[index++])
	{
		length++;
	}
	for (index = length - 1; index >= length / 2; index--)
	{
		temp = s[index];
		s[index] = s[length - index - 1];
		s[length - index - 1] = temp;
	}
}
