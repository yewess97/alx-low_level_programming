#include "main.h"
/**
 * _isupper - a C program that checks for uppercase character.
 * @c: The number to be checked
 * Return: 1 (if upper), 0 (otherwise)
 **/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
