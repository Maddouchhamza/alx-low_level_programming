#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function copy a string
 * @str: adress to a string
 *
 * Return: pointer to the copy
 */
char *_strdup(char *str)
{
	int j, i = 0;
	char *C;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	C = malloc(sizeof(char) * i);
	if (C == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		C[j] = str[j];
	}
	return (C);
}
