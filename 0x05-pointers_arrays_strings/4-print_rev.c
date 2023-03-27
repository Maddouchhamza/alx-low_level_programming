#include "main.h"
/**
 * print_rev - printsa string in reverse
 * @s: adresse of a string
 *
 * Return: no return
 */
void print_rev(char *s)
{
	char c = *(s++);
	int i, b = 0;
	char rev[1000];

	while (c != '\0')
	{
		rev[b] = c;
		b++;
		c = *(s++);
	}
	for(i = b-1; i >= 0; i--)
	{
		_putchar(rev[i]);
	}
	_putchar('\n');
}
