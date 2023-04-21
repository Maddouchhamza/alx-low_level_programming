#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints a name
 * @name : pointer to string containing the name
 * @f : function pointer for formatting
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
