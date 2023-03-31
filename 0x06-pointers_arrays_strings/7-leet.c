#include "main.h"
/**
 * leet - encodes a string into 1337
 * @src: the string to encode
 *
 * Return: pointer to the updated string
 */
char *leet(char *src)
{
	int i = 0, j;
	char a[5] = {'A', 'E', 'O', 'T', 'L'};
	char b[5] = {'4', '3', '0', '7', '1'};

	while (src[i])
	{
		j = 0;
		while (j < 5)
		{
			if ((src[i] == a[j]) || (src[i] == a[j] + 32))
			{
				src[i] = b[j];
			}
			j++;
		}
		i++;
	}
	return (src);
}
