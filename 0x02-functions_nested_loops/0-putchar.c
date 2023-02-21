#include "main.h"
/**
 * main - a C program that prints _putchar.
 * Return: 0 (For Success)
 **/
int main(void)
{
	char school[] = "_putchar";
	int i = 0;

	while (school[i] != '\0')
	{
		_putchar(school[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
