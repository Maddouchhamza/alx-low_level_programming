#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: adress of a string
 *
 * Return: no return
 */
void puts_half(char *str)
{
	char c = *(str++);
	int i, b = 0;
	char L[1000];

	while (c != '\0')
	{
		L[b] = c; 
		b++;
	}
	if (b % 2 == 0)
	{
		for (i = b/2; i < b; i++)
		{
			_putchar(L[b]);
		}
		_putchar('\n');
	}
	else
	{
		_putchar(L[(b - 1) / 2]);
		_putchar('\n');
	}
}	
