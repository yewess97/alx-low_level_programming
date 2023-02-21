#include "main.h"
/**
 * print_last_digit - a C program that prints the last digit of a number.
 * @num: the integer to be computed
 * Return: the value of the last digit
 **/
int print_last_digit(int num)
{
	int ld = num % 10;

	if (ld < 0)
	{
		ld *= -1;
		_putchar(ld + '0');
		return (ld);
	}

	_putchar(ld + '0');
	return (ld);
}
