#include "main.h"
/**
 * is_prime_number - checks if number is prime of not
 * @n: number to check
 * @i: number of recursion
 *
 * Return: 1 if prime, 0 otherwise
 */
int check_prime(int n, int i);
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (check_prime(n, n - 1));
}
/**
 * check_prime - checks if number is prime
 * @n: number to check
 * @i: number of recursions
 *
 * Return: 1 if n prime, 0 otherwise
 */
int check_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (check_prime(n, i - 1));
}
