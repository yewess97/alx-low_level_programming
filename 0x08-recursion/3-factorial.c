#include "main.h"
/**
 * factorial - a C program that returns the factorial of a given number.
 * @n: A given number to be calculated
 * Return: The factorial of the given number
 **/
int factorial(int n)
{
	if (n == 0)
		return (1);

	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
