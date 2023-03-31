#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @src: source string
 *
 * Return: pointer to updated string
 */
char *cap_string(char *src)
{
	int i, j = 0;
	char tabs[13] = {32, '\t', '\n', 44, 59, 46, 33, 63, 34, 40, 41, '{', '}'};

	while (src[j])
	{
		i = 0;

		while (i < 13)
		{
			if ((j == 0 || src[j - 1] == tabs[i]) && (src[j] >= 'a' && src[j] <= 'z'))
				src[j] -= 32;
			i++;
		}
		j++;
	}
	return (src);
}
