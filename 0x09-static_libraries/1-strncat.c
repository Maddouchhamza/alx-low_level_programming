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
	int j = 0, i = 0;

	while (*first != '\0')
	{
		first++;
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
