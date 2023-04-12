#include "main.h"
#include <stdlib.h>
/**
 * _counter - word counter
 * @str: input string
 *
 * Return: integer number of words or NULL if no words found
 */
int _counter(char *str)
{
	int i, space, count;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			space = 0;
		else if (space == 0)
		{
			space = 1;
			count++;
		}
	}
	return (count);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (words) or NULL
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = _counter(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);

				while (start < end)
				*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	matrix[k] = NULL;

	return (matrix);
}
