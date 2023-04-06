#include "main.h"
/**
 * _pow_recursion -  function return x raised to the power of y
 * @x: value to calculate its power to y
 * @y: the power
 *
 * Return: x raised to power of y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
