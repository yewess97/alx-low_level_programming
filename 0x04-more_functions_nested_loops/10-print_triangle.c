#include "main.h"
/**
 * print_triangle - a C program that prints a triangle.
 * @size: The size of the triangle
 **/
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = size - i - 1; j > 0; j--)
			{
				_putchar(' ');
			}
			for (j = i + 1; j > 0; j--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
