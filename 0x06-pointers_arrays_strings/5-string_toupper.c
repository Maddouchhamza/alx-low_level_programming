#include "main.h"
/**
 * string_toupper - changes all lowercase letters of to uppercase
 * @src : source string
 *
 * Return: pointer to  all caps string
 */
char *string_toupper(char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		if (src[i] >= 'a' && src[i] <= 'z')
		{
			src[i] -= 32;
		}
	}
	return (src);
}
