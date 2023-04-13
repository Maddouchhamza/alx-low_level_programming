#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second one
 *
 * @n: unsigned integer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int m, k, i = 0, j = 0;
	char *C;

	if (s1 != NULL)
		while (s1[i] != '\0')
			i++;
	if (s2 != NULL)
		while (s2[j] != '\0')
			j++;
	C = malloc(sizeof(char) * (i + j + 1));
	if (C == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		C[k] = s1[k];
	if (n <= j)
		for (m = 0; m < n; m++)
		{
			C[k] = s2[m];
			k++;
		}
	else
		for (m = 0; m < j; m++)
		{
			C[k] = s2[m];
			k++;
		}
	C[k] = '\0';
	return (C);
}
