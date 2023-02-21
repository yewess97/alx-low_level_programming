#include "main.h"
/**
 * print_sign - a C program that prints the sign of a number.
 * @n: The sign number to printed
 * Return: 1 (if n > 0), 0 (if n = 0), -1 (if n < 0)
 **/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
