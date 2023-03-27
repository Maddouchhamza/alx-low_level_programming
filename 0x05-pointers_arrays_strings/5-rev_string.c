#include "main.h"
#include<stdio.h>
/**
 * rev_string - function that reverse a string
 * @s: adress of a string
 *
 * Return: no return
 */
void rev_string(char *s)
{
	char rev[1000];
	int i, b = 0;
	rev[b] = *(s++);

	while (rev[b] != '\0')
	{
		b++;
		rev[b] = *(s++);
	}
	for (i = 0; i < b; i++)
	{
		*(s-i-2) = rev[i];
	}
	printf("\n");
}
