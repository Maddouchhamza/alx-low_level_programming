#include "main.h"
/**
 * more_numbers - prints 10 times numbers from 0 to 14
 *
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, j, quo, mod;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			quo = j / 10;
			mod = j % 10;
			if (j >= 10)
			{
				_putchar(quo + '0');
			}
			_putchar(mod + '0');
		}
		_putchar('\n');
	}
}
