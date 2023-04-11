#include "main.h"

int factorial(int n, int p)
{
	if (n == 1 || n == 0)
	{
		return (p);
	}
	return (factorial(n - 1, p * n));
}
