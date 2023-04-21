#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: numbers of values to add
 *
 * Return: sum of all parameters otherwise 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list val;
	unsigned int i;
	int s = 0;

	if (n == 0)
		return (0);

	va_start(val, n);
	for (i = 0; i < n; i++)
		s = s + va_arg(val, int);
	va_end(val);
	return (s);
}
