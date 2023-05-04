#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to string of binary
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i, j, len = 0;
	unsigned int dec = 0;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
	{
		if (b[len] > 49 || b[len] < 48)
			return (0);
		len++;
	}
	for (i = len - 1, j = 0; i >= 0 && j < len; i--, j++)
	{
		dec += (b[j] - '0') * (1 << i);
	}
	return (dec);
}
