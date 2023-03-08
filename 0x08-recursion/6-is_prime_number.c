#include "main.h"

/**
 * check_prime - A C program that checks if the given number
 * is prime or not.
 * @n: The given number to be checked
 * @i: The iteration times
 * Return: 1 (if the input integer is a prime number),
 * otherwise return 0
 **/
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	else if ((n % i == 0) && (i > 1))
		return (0);
	else if ((n / i) < i)
		return (1);
	else
		return (check_prime(n, ++i));
}

/**
 * is_prime_number - a C program that returns either
 * the given number is prime or not
 * @n: A given number to calculate if it is prime
 * Return: 1 (if the input integer is a prime number),
 * otherwise return 0
 **/
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
