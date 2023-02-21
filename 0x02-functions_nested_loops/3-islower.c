#include "main.h"
/**
 * _islower - a C program that checks for lowercase character.
 * @c: the character
 * Return: 1 (For Success), 0 (For Failure)
 **/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
