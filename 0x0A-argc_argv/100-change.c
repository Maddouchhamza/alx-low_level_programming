#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins
 * to make change for amout of money
 * @argc: size of arguments
 * @argv: cents
 *
 * Return: 0 (success or argument is negative)
 * or 1 if number of arguments is not exactly 1
 */
int main(int argc, char *argv[])
{
	int i, num, res;
	int cents[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
	}
	else
	{
		num = atoi(argv[1]);
		res = 0;

		for (i = 0; i < 5; i++)
		{
			while (num >= cents[i])
			{
				res++;
				num = num - cents[i];
			}
		}
		printf("%d\n", res);
	}
	return (0);
}
