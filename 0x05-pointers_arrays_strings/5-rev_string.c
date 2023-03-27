#include "main.h"
/**
 * rev_string - function that reverse a string
 * @s: adress of a string
 *
 * Return: no return
 */
void rev_string(char *s)
{
	char rev[1000];
	int i, b = 0;
	char c = *(s++);

	while (c != '\0')
	{
		rev[b] = c;
		c = *(s++);
		b++;
	}
	for (i = b - 1; i >= 0; i--)
	{
		_putchar(rev[i]);
	}
	_putchar('\n');
}
