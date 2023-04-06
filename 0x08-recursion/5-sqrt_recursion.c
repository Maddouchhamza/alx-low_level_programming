#include "main.h"
/**
 * _sqrt_recursion - function returns the natural square root of a number
 * @n: intger
 * @p: nombre a tester si son carre est parfait et egale a n
 * Return: sqrt of n
 */
int carre_parfait(int n, int p);
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (carre_parfait(n, 0));
}
/**
 * carre_parfait - recherche le carre parfait coincidant avec la racine
 * @n : nombre a chercher sa racine
 * @p: nombre a tester si son carre est parfait et egale a n
 *
 * Return:retourne la racine du carre parfait sinon -1
 */
int carre_parfait(int n, int p)
{
	if (p * p > n)
	{
		return (-1);
	}
	if (p * p == n)
	{
		return (p);
	}
	return (carre_parfait(n, p + 1));
}
