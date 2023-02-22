#include "main.h"
/**
 * print_times_table - a C program that prints the n times table.
 * description: starting with 0.
 * @n: the number of times that table to be printed
 **/
void print_times_table(int n)
{
	int num, mult, prod;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			for (mult = 0; mult <= n; mult++)
			{
				prod = num * mult;

				if (mult != n)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (mult != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(prod + '0');
				}
				else
					_putchar(prod + '0');
				if (prod > 99)
				{
					_putchar(prod / 100 + '0');
					_putchar((prod / 10 % 10) + '0');
				}
				else if (prod > 9)
				{
					_putchar(' ');
					_putchar(prod / 10 + '0');
				}
				_putchar(prod % 10 + '0');
			}
			_putchar('\n');
		}
	}

}
