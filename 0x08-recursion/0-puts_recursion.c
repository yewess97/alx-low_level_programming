#include "main.h"
/**
 * _puts_recursion - a C program that prints a string.
 * @s: The input string to be printed
 **/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s++);
}
