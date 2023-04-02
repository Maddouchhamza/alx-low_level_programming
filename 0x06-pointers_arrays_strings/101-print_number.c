#include "main.h"
/**
 * print_number - prints an integer
 * @n : integer to print
 *
 */
void print_number(int n)
{
	unsigned int number;

	number = n;

	if (n < 0)
	{
		_putchar('-');
		number = number * -1;
	}

	if (number / 10 > 0)
	{
		print_number(number / 10);
	}
	_putchar((number % 10) + '0');
}
