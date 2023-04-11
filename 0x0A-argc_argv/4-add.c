#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#include "main.h"
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
		if (isInteger(argv[i]))
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
/**
 * isInteger - check if its integer
 * @s: string
 *
 * Return: 1 or 0
 */
int isInteger(char *s)
{
	unsigned int c = 0;

	while (c < strlen(s))
	{
		if (!isdigit(s[c]))
		{
			return (0);
		}
		c++;
	}
	return (1);

}
