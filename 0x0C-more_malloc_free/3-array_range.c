#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min: first value in array
 * @max: last value in array
 *
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int k = 0, i, *A;

	if (max < min)
		return (NULL);
	A = malloc(sizeof(int) * (max - min + 1));
	if (A == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		A[k] = i;
		k++;
	}
	return (A);
}
