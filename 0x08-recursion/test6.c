#include "main.h"

int carre_parfait(int n, int h);
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (carre_parfait(n,1)); 
}

int carre_parfait(int n, int h)
{
	if (h * h > n)
	{
		return (-1);
	}
	if (h * h == n)
	{
		return (h);
	}
	return(carre_parfait(n,h + 1));
}
