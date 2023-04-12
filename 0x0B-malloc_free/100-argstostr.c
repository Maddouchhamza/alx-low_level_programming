#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: integer
 * @av: pointer of pointer to char
 *
 * Return: pointer to a char
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0;
	int len = 0;
	char *a;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			len++;
		}
	}
	len = len + ac;
	a = malloc((len + 1) * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			a[k] = av[i][j];
			k++;
		}
		if (a[k] == '\0')
		{
			a[k++] = '\n';
		}
	}
	return (a);
}
