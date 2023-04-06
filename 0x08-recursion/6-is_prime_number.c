#include "main.h"
/**
 * is_prime_number - function that checks if @n is prime or not
 * @n: integer to check
 * @h: integer
 *
 * Return: 1 if prime, 0 otherwise
 */
int diviseur(int n, int h);
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (diviseur(n, n / 2));
}
/**
 * diviseur - function qui vérifie si n n'est divisible que par n et 1
 * @n: integer to check
 * @h: les diviseur
 *
 * Return: 1 if prime, 0 otherwise
 */
int diviseur(int n, int h)
{
	if (h == 1)
	{
		return (1);
	}
	if (n % h == 0)
	{
		return (0);
	}
	return (diviseur(n, h - 1));
}
