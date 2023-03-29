#include "main.h"
/**
 * _strcat - function that concatenates two strings
 * @dest: adress of the first string
 * @src: adress of the second string
 *
 * Return: a third string contains the é first strings
 */
char *_strcat(char *dest, char *src)
{
	char *debut = dest;
	
	while (*dest != '\0')
	{
		dest++; 
	}
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (debut);
}	
