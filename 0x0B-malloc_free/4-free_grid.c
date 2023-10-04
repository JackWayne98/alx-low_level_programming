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
	int i, j;
	int **ptr;

	ptr = grid;

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < i; j++)
		{
			free(ptr[j]);
		}
		free(ptr);
	}
}
