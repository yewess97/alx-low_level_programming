#include "variadic_functions.h"
/**
 * print_numbers - a C program that prints numbers.
 * @separator: A given string to be printed between numbers
 * @n: The given number of integers passed to the function
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i = 0;

	va_start(valist, n);

	for (; i < n; i++)
	{
		printf("%d", va_arg(valist, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}
