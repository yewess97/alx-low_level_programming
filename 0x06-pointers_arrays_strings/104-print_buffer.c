#include <stdio.h>
#include "main.h"
/**
 * print_buffer - a C program that prints a buffer.
 * @b: The buffer
 * @size: The buffer size
 */
void print_buffer(char *b, int size)
{
	int i, j, o;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (o = 0; o < size; o += 10)
	{
		j = size - o < 10 ? size - o : 10;
		printf("%08x: ", o);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", *(b + o + i));
			else
				printf("  ");
			if (i % 2)
				printf(" ");
		}
		for (i = 0; i < j; i++)
		{
			int c = *(b + o + i);

			if (c < 32 || c > 132)
				c = '.';

			printf("%c", c);
		}
		printf("\n");
	}
}

