#include<stdio.h>
/**
 * print_diagsums - function that prints the sum of the two diagonals
 * @a: adress of an array of integers
 * @size: integer, lenght of the array
 *
 * Return: no return
 */
void print_diagsums(int *a, int size)
{
	int i = 0, j, cells;
	int sum1 = 0, sum2 = 0;

	cells = size * size;

	while (i < cells)
	{
		sum1 = sum1 + a[i];
		i += size + 1;
	}

	j = size - 1;
	while (j < cells - 1)
	{
		sum2 = sum2 + a[j];
		j += size - 1;
	}
	printf("%d, %d\n", sum1, sum2);
}
