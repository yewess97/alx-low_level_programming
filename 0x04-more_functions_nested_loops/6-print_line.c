#include "main.h"
/**
 * print_line - a C program that draws a straight line in the terminal.
 * @n: The number of times the character _ should be printed
 **/
void print_line(int n)
{
	int i;
	
	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_puthchar('_');
	}
	_putchar('\n');
}
