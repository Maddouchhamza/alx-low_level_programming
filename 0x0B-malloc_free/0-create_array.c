#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * create_array - creates array of chars, initializes it with a specific char
 * @size: unsigned integer
 * @c: character
 *
 * Return: pointer to a char
 */
char *create_array(unsigned int size, char c)
{
	char *L;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	L = malloc(sizeof(char) * size);
	if (L == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		L[i] = c;
	}
	L[i] = '\0';
	return (L);
}
