#include<stdio.h>
/**
 * main - program that prints all arguments it receives
 * @argc: number of arguments in command line
 * @argv: string contains all arguments
 *
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
