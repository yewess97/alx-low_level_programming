#include "main.h"
/**
 * puts_half - a C program that prints half of a string.
 * @str: The string of which to print its second half
 **/
void puts_half(char *str)
{
	int k, j = 0;

	while (str[j] != '\0')
	{
		j++;
	}
	if (j % 2 == 1)
	{
		k = (j - 1) / 2;
		k++;
	}
	else
	{
		k = j / 2;
	}
	for (; k < j; k++)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
