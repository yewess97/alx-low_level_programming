#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - a C program that returns a pointer to
 * a 2 dimensional array of integers.
 * @width: The width of the matrix
 * @height: The height of the matrix
 * Return: A pointer to a 2 dimensional array of integers.
 **/
int **alloc_grid(int width, int height)
{
	int i, j, k, l;
	int **y;

	if (width <= 0 || height <= 0)
		return (NULL);

	y = malloc(sizeof(int *) * height);

	if (!y)
	{
		free(y);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		y[i] = malloc(sizeof(int) * width);

		if (!y[i])
		{
			for (j = 0; j <= i; j++)
				free(y[j]);

			free(y);
			return (NULL);
		}
	}

	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
			y[k][l] = 0;
	}

	return (y);
}
