#include <stdlib.h>

/**
 * free_grid- Frees a grid of memory allocated with alloc_grid
 * @grid: A pointer to the 2D array in heap
 * @height: Number of subarrays
 *
 * Return: Void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

