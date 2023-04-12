#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function returns a pointer to a 2D array of integers
 * @width: integer
 * @height: integer
 *
 * Return: pointer to a 2D array
 */
int **alloc_grid(int width, int height)
{
	int **A;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	A = malloc(sizeof(int) * height);
	if (A == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		A[i] = malloc(sizeof(int) * width);
		if (A[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(A[i]);
			free(A);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			A[i][j] = 0;
		}
	}
	return (A);
}
