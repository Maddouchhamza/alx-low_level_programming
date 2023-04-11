#include<stdio.h>
/**
 * main - program that prints its name, followed by a new line
 * @argc: number of arguments in command line
 * @argv: string contains all arguments 
 *
 * Return: 0 always
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
