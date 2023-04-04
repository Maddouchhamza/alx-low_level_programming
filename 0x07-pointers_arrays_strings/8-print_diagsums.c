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
	int f = 0, s = 0;
	int i = 0, j = size - 1;

	while (i < size * size)
	{
		f = f + a[i];
		i = i + size + 1;
	}
	while (j < size * size - 1)
	{
		s = s + a[j];
		j = j + size - 1;
	}
	printf("%d, %d\n",f,s);
}
