#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: integer
 *
 * Return: no return while its a void function
 */
void print_to_98(int n)
{
	int j;

	if (n <= 98)
	{
		for (j = n; j < 98; j++)
		{
			printf("%d, ", j);
		}
	}
	else
		if (n >= 98)
		{
			for (j = n; j > 98; j--)
			{
				printf("%d, ", i);
			}
		}
	printf("98\n");
}
