#include<stdio.h>
/**
 * _strlen - function returns the length of a string
 * @s: adresse of a string
 *
 * Return: length of a string
 */
int _strlen(char *s)
{
	int b = 0;
	char c = *(s++);

	while (c != '\0')
	{
		c = *(s++);
		b++;
	}	
	return(b);
}
