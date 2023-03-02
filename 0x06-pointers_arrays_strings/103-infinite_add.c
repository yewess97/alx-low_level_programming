#include "main.h"
/**
 * infinite_add - a C program that adds two numbers.
 * @n1: The first number to be added
 * @n2: The second number to be added
 * @r: The buffer that the function will use to store the result
 * @size_r: The buffer size
 * Return: A pointer to the result
 **/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, overflow = 0, digits = 0;
	int val1 = 0, val2 = 0, temp = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || overflow == 1)
	{
		if (i < 0)
			val1 = 0;
		else
			val1 = *(n1 + i) - '0';
		if (j < 0)
			val2 = 0;
		else
			val2 = *(n2 + j) - '0';
		temp = val1 + val2 + overflow;
		if (temp >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (temp % 10) + '0';
		digits++;
		j--;
		i--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';	
	return (r);
}

