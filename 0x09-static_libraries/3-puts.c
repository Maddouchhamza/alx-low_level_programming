#include "main.h"
/**
 * _puts - prints a string followed by a new line
 * @str: adresse of a string
 *
 * Return: no return
 */
void _puts(char *str)
{
	char c = *(str++);

	while (c != '\0')
	{
		_putchar(c);
		c = *(str++);
	}
	_putchar('\n');
}
