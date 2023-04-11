#include "main.h"

int diviseur(int n, int d);
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (diviseur(n, 2));
}

int diviseur(int n, int d)
{
	if (n % d == 0 && d < n / 2)
	{
		return (0);
	}
	if (d > n/2)
	{
		return (1);
	}
	return (diviseur(n, d + 1));
}
