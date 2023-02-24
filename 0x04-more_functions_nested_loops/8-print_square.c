#include "main.h"
/**
 * print_square - a C program that prints a square.
 * @size: The size of the square
 **/
void print_square(int size)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
