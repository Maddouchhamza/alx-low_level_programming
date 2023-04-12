#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2D grid previously created with alloc_grid
 * @grid: pointer to pointer of integer
 * @height: integer
 *
 * Return: no return
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL || 0)
	{
		return;
	}
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
