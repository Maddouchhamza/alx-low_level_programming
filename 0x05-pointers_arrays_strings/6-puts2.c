#include "main.h"
/**
 * puts2 - rints every other character of a string, starting with the first character, followed by a new line.
 * @tr: adress of a string
 *
 * Return: no return
 */
void puts2(char *str)
{
	char c = *(str++);
	char L[1000];
	int i, b = 0;

	while (c != '\0')
	{
		L[b] = c;
		b++;
		c = *(str++);
	}
	for (i = 0; i < b; i+=2)
	{
		_putchar(L[i]);
	}
}
