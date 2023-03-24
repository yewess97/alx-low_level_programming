#include "variadic_functions.h"
/**
 * print_strings - a C program that prints strings.
 * @separator: A given string to be printed between the strings
 * @n: The given number of strings passed to the function
 **/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i = 0;
	char *str;

	va_start(valist, n);

	for (; i < n; i++)
	{
		str = va_arg(valist, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator && (i < n - 1))
			printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}
