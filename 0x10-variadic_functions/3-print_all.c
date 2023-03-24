#include "variadic_functions.h"
/**
 * print_all - a C program that prints anything.
 * @format: The given list of types of arguments passed to the function
 **/
void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int i, j, c = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(valist, format);

	for (i = 0; format && format[i]; i++)
	{
		for (j = 0; t_arg[j]; j++)
		{
			if (format[i] == t_arg[j] && c)
			{
				printf(", ");
				break;
			}
		}

		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(valist, int)), c = 1;
				break;
			case 'i':
				printf("%d", va_arg(valist, int)), c = 1;
				break;
			case 'f':
				printf("%f", va_arg(valist, double)), c = 1;
				break;
			case 's':
				str = va_arg(valist, char *), c = 1;
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		}
	}

	printf("\n");
	va_end(valist);
}


