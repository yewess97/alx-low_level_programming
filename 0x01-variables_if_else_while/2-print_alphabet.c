#include <stdio.h>
/**
 * main - a C program to print the alphabet in lowercase.
 * Return: 0 (For Success)
 **/
int main(void)
{
	char y = "abcdefghijklmnopqrstuvwxyz";

	while (y <= 'z')
	{
		putchar(y);
		y++;

	}

	putchar('\n');
	return (0);
}
