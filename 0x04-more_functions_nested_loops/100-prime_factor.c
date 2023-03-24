#include <stdio.h>
#include "main.h"

/**
 * main - prints the biggest prime factor of number
 *
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	long int number = 612852475143;

	printf("%ld\n", biggestFactor(number));
	return (0);
}


/**
 * PrimeFactor - checks if number is prime
 * @n : number to check
 *
 * Return: 0 if prime, 1 otherwise
 */
int PrimeFactor(long int n)
{
	int i;

	if (n <= 1)
	{
		return (0);
	}
	else
		if (n == 2)
		{
			return (1);
		}
	else
	{
		for (i = 2; i < n; i++)
		{
			if (n % i == 0)
			{
				return (0);
			}
		}
		return (1);
	}
}
/**
 * biggestFactor - check for biggest prime factor of number
 * @num: number to check
 *
 * Return: biggest factor
 */

long int biggestFactor(long int num)
{
	long int i, f;

	f = num;
	for (i = 2; i <= f; i++)
	{
		if (PrimeFactor(f) == 1)
		{
			break;
		}
		else
		{
			if ((f % i == 0) && (PrimeFactor(i) == 1))
			{
				f = f / i;
				continue;
			}
			else
			{
				f = f;
			}
		}
	}
	return (f);
}
