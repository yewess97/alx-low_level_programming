#include <stdio.h>
/**
 * main - a C program that prints the name of the file it was compiled from.
 * Return: 0 (For Success)
 **/
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
