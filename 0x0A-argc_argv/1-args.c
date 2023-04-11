#include<stdio.h>
/**
 * main - program that prints the number of arguments passed into it
 * @argc: number of arguments in command line
 * @argv: string contains all arguments
 *
 * Return: 0 always
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
