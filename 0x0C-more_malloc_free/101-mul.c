#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
/**
 * main - program that multiplies two positive numbers
 * @argc: number of arguments in command line
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 1;

	if (argc > 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		j = 0;
		while (*(argv[i] + j) != '\0')
		{
			if (!isdigit(*(argv[i] + j)))
			{
				printf("Error\n");
				exit(98);
			}
			j++;
		}
		sum = sum * atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
