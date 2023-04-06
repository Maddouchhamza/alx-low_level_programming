#include "main.h"
/**
 * is_palindrome - checks if string is palindrome
 * @s: string to check
 *
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (_check(s, 0, srecursion(s)));

}
/**
 * srecursion - calculates length of string for _check
 * @s: string
 *
 * Return: length of s
 */
int srecursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + srecursion(s + 1));
}

/**
 * _check - checks if palindrome
 * @s: string to check
 * @i: index
 * @len: length of string
 *
 * Return: 1 if palindrome, 0 otherwise
 */

int _check(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
	{
		return (0);
	}
	if (i >= len)
	{
		return (1);
	}
	return (_check(s, i + 1, len - 1));
}
