#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - function that searches for an integer
 * @array: elements where to search
 * @size: the size of the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return:  returns the index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (-1);
}
