#include "main.h"
/**
 * _abs - computes absolute value of a number
 * @n: number to compute
 *
 * Return: absolute value n
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = -1 * n;
		return (n);
	}
	else
	{
		return (n);
	}
}
/**
 * print_last_digit - prints last digit of a number
 * @n: number which last digit is printed
 *
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	int i;

	i = _abs((n % 10));
	_putchar(i + '0');
	return (i);
}
