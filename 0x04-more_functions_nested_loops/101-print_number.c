#include "main.h"
/**
 * print_number - a C program that prints an integer.
 * @n: The number to be printed
 **/
void print_number(int n)
{
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	n /= 10;
	if (n != 0)
		print_number(n);
	_putchar((unsigned int) n % 10 + '0');
}
