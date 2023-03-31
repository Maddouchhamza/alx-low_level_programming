#include "main.h"
/**
 * reverse_array - reverses the content of array of integers
 * @a : an array of integers
 * @n : number of elments of the array
 *
 */
void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0; i < n; i++)
	{
		if (i == n)
		{
			break;
		}
		else
		{
			n--;
			tmp = a[n];
			a[n] = a[i];
			a[i] = tmp;
		}
	}
}
