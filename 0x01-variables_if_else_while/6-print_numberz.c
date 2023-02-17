#include <stdio.h>
/**
 * main - a C program to print all single digit numbers of base 10.
 * Return: 0 (For Success)
 **/
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');
	return (0);
}
