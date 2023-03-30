#include "main.h"
/**
 * _strcat - function that concatenates two strings
 * @dest: adress of the first string
 * @src: adress of the second string
 *
 * Return: char type returned
 */
char *_strcat(char *dest, char *src)
{
	char *first = dest; 
	char *second = src;
	char *result = first;
	char *debut = result;
	
	while (*first != '\0')
	{
		*result = *first;
		result++;
		first++;	
	}
	while (*second != '\0')
	{
		*result = *second;
		result++;
		second++;
	}
	return (debut);
}	
