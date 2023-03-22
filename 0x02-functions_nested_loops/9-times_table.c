#include "main.h"
/**
 * times_table - prints the 9 times table
 *
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, prod;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j == 0)
			{
				_putchar('0');
				continue;
			}
			prod = i * j;
			_putchar(',');
			_putchar(' ');
			if (prod >= 10)
			{
				_putchar(prod / 10 + '0');
				_putchar(prod % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(prod + '0');
			}
		}
		_putchar('\n');
	}
}
