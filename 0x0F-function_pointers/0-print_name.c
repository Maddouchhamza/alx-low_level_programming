#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - function prints a name
 * @name:  pointer to the name
 * @f: function pointer for formatting
 *
 * Return: no return
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
