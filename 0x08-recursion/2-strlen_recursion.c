#include "main.h"
/**
 * _strlen_recursion - function that return a length of a string
 * @s: adress of a string
 *
 * Return: length of the string pasted
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
