#include <stdio.h>
/**
 * main - a C program to print all possible combinations single-digit numbers.
 * Return: 0 (For Success)
 **/
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
