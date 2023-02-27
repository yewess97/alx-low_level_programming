#include "main.h"
/**
 * puts2 - a C program that prints every other character of a string,
 * starting with the first character.
 * @str: The string to be treated
 **/
void puts2(char *str)
{
	int i = 0, j = 0;

	while (str[j] != '\0')
	{
		j++;
	}
	for (; i < j; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
