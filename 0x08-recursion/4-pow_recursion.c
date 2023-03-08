#include "main.h"
/**
 * _pow_recursion - a C program that returns the value of (x)
 * raised to the power of (y)
 * @x: A given value to be multiplied
 * @y: A given value to calculate the times to multiply (x)
 * Return: The value of (x) raised to the power of (y)
 **/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
