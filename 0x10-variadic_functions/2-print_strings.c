#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings, followed by a new line
 * @n: numbers of strings to print
 * @separator: character to print between strings
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list val;
	unsigned int i;
	char *string;

	va_start(val, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(val, char *);
		if (string == NULL)
			printf("nil");
		else
			printf("%s", string);
		if (i == n - 1)
			break;
		if (separator == NULL)
			continue;
		printf("%s", separator);
	}
	va_end(val);
	printf("\n");
}
