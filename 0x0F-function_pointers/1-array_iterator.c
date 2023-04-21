#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - executes a function given on each element of an array
 * @array: elements toapply function on
 * @size: the size of the array
 * @action: pointer to the function you need to use
 *
 * Return: no return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL && array != NULL)
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
}
