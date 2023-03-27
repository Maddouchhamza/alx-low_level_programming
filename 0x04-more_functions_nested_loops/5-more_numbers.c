#include "main.h"
/**
 * more_numbers - prints 10 times numbers from 0 to 14
 *
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, j, q, m;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			q = j / 10;
			m = j % 10;
			if (j >= 10)
			{
				_putchar(q + '0');
			}
			_putchar(m + '0');
		}
		_putchar('\n');
	}
}
