#include "main.h"
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: length of an array
 * @size: number of bytes for each element of the array
 *
 * Return: void pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *c;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	c = (char *)ptr;
	for (i = 0; i < size * nmemb; i++)
		c[i] = 0;
	return (ptr);

}
