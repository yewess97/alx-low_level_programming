#include "main.h"
/**
 * _print_rev_recursion - a C program that prints a string in reverse.
 * @s: The input string to be printed in reverse
 **/
void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
