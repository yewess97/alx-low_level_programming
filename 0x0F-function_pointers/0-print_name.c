#include "function_pointers.h"
/**
 * print_name - a C program that prints a name.
 * @name: The given name to be printed
 * @f: A pointer to the function which prints the name
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
