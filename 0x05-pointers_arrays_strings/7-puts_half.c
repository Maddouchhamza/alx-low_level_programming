#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: input string
 *
 *
 */
void puts_half(char *str)
{
	int i, counter = 0;
	int halfcount = 0;

	while (str[counter] != '\0')
	{
		counter++;
	}

	if (counter % 2 == 0)
	{
		halfcount = counter / 2;
		for (i = halfcount; i < counter; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		halfcount = (counter - 1) / 2;
			for (i = halfcount + 1; i < counter; i++)
			{
				_putchar(str[i]);
			}
	}
	_putchar('\n');
}
