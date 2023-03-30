#include "main.h"
/**
 * _strncat - function that concatenates two strings
 * @dest: adress of a string
 * @src: adress of a second string
 * @n: integer
 *
 * Return: pointer to a string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *first = dest;
	int j, i = 0;

	while (*first != '\0')
	{
		first++;
		i++;
	}
	for (j = 0; j < n; j++)
	{
		dest[i] = src[j]; 
	}
	return(dest);
}
