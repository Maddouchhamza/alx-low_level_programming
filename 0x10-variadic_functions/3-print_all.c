#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list val;
	int i = 0;
	char *separator;
	char *arg;

	va_start(val, format);
	separator = "";

	if (format)
	{
		while (format[i] != '\0')
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(val, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(val, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(val, double));
					break;
				case 's':
					arg = va_arg(val, char *);
					if (arg == NULL)
						arg = "(nil)";
					printf("%s%s", separator, arg);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}
	va_end(val);
	printf("\n");
}
