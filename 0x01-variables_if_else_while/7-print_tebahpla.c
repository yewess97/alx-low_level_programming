#include <stdio.h>
/**
 * main - a C program to print the lowercase alphabet in reverse.
 * Return: 0 (For Success)
 **/
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
		putchar(alphabet);

	putchar('\n');
	return (0);
}
