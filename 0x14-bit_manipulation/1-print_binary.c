#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to represent in binary
 *
 */
void print_binary(unsigned long int n)
{
	unsigned long int div, rem;

	div = n >> 1;
	rem = n & 1;

	if (n != 0 && n > div && div != 0)
	{
		print_binary(div);
		_putchar(rem + '0');
	}
	else if (n == 0 || div == 0)
	{
		_putchar(rem + '0');
	}
}
