#include "main.h"

/**
 * _sqrt - a C program that calculates the natural square root
 * @n: A given number to calculate its square root
 * @i: A given iterate number
 * Return: The natural square root for (n)
 **/
int _sqrt(int n, int i)
{
	int iteration = i * i;

	if (iteration > n)
		return (-1);
	else if (iteration == n)
		return (i);
	else
		return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - a C program that returns the natural square root
 * of a number.
 * * @n: A given number to calculate its natural square root
 * Return: The natural square root
 * of a number.
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
