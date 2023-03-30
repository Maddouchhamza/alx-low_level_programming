#include "main.h"
/**
 * _strncpy - function that copies a string
 * @dest: adress of a string
 * @src: adress of a second string
 * @n: integer
 *
 * Return: pointer to a string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (src[j] == '\0')
	{
		dest[i] = '\0';
	}
	return (dest);
}
