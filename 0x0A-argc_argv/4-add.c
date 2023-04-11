#include<stdio.h>
#include <ctype.h>
#include <string.h>
#include<stdlib.h>
/**
 * main - program that adds positive numbers
 * @argc: number of arguments in command line
 * @argv: string contains all arguments
 *
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int i, c = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (isdigit(*argv[i]) != 0)
		{
			c = c + atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", c);
	return (0);
}
