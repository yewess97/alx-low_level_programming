#include "main.h"
/**
 * main - a C program that prints the alphabet, in lowercase.
 * Return: 0 (For Success)
 **/
int print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');

	return (0);
}
