#include "main.h"
/**
 * print_rev - a C program that prints a string, in reverse.
 * @s: The string to be printed in reverse
 **/
void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	for (c -= 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
