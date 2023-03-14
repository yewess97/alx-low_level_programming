#include <stdlib.h>
#include "main.h"
/**
 * free_grid - a C program that frees a 2 dimensional grid
 * that previously created by alloc_grid function.
 * @grid: The address of the 2 dimensional grid
 * @height: The height of the grid
 * Return: A free grid
 **/
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);

	free(grid);
}
