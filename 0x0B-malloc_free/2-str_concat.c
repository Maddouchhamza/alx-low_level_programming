#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: adress of the first string
 * @s2: adress of the second string
 *
 * Return: pointer to the final string
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, m = 0;
	char *F;

	while (s1[i] != '\0' && s1 != NULL)
	{
		i++;
	}
	while (s2[j] != '\0' && s2 != NULL)
	{
		j++;
	}
	F = malloc(sizeof(char) * (j + i + 1));
	if (F == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		F[k] = s1[k];
	}
	for (m = 0; m < j; m++, k++)
	{
		F[k] = s2[m];
	}
	F[k] = '\0';
	return (F);
}
