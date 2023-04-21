#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line
 * @n: numbers of values to print
 * @separator: character to print between values
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list val;
	unsigned int i;

	va_start(val, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(val, int));
		if (i == n - 1)
			break;
		if (separator == NULL)
			continue;
		printf("%s", separator);
	}
	printf("\n");
	va_end(val);
}
