#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * free_grid -function that frees a 2D array
 *@grid: grid to be free
 *@height: height of the grid
 * Return: Always 0 (Success)
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
