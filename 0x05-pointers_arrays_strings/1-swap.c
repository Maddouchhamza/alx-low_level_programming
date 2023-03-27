#include<stdio.h>
/**
 * swap_int - swap the values of two integers
 * @a: adresse of the integer a
 * @b: adresse of the integer b
 *
 * Return: no return
 */
void swap_int(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
