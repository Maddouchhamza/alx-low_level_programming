#include "main.h"
/**
 * is_palindrome - function that checks if a string is palindrome or not
 * @s: adress of a string
 * @i: integer
 *
 * Return: 1 if s is palindrome, 0 otherwise
 */
int length_palin(char *s);
int test_palin(char *s, int i);
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (test_palin(s, 0));
}
/**
 * length_palin - recursive function that return the length of s
 * @s: adress to a string 
 * 
 * Return: the length of s
 */
int length_palin(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + length_palin(s + 1));
}
/**
 * test_palin - recursive function that return if s is palindrome or not
 * @s: adress of a string
 * @i: integer index
 *
 * Return: 1 if s is palindrome, 0 otherwise
 */
int test_palin(char *s, int i)
{
	if (i == length_palin(s) / 2)
	{
		return (1);
	}
	if (s[i] != s[length_palin(s) - i - 1])
	{
		return (0);
	}
	return (test_palin(s, i + 1));
}
