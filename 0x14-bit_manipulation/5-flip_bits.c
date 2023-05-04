#include "main.h"
/**
 * flip_bits - returns number of bits to flip to get to another number
 * @n: start number
 * @m: number to get to
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int counter = 0;
	unsigned long int result;

	result = n ^ m;

	while (result)
	{
		counter += result & 1;
		result = result >> 1;
	}

	return (counter);
}
