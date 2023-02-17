#include <stdio.h>
/**
 * main - a C program to print all the numbers of base 16 in lowercase.
 * Return: 0 (For Success)
 **/
int main(void)
{
	int num;
	char alphabet;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
		putchar(alphabet);

	putchar('\n');
	return (0);
}
