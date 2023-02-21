#include "main.h"
/**
 * _isalpha - a C program that checks for alphabetic character.
 * @c: the character
 * Return: 1 (For Success), 0 (For Failure)
 **/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
