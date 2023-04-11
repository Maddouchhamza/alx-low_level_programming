#include "main.h"

int _pow_recursion(int x, int y, int p){
	if (y == 0)
	{
		return (p);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (_pow_recursion(x, y - 1, p * x));
}
