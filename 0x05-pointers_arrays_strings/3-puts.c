#include "main.h"
/**
 * _puts - a C program that prints a string.
 * @str: The string to be printed
 **/
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
