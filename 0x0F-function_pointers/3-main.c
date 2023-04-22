#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - main function
 * @argc: number of arguments in command line
 * @argv: string contains all arguments
 *
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Eoooooooroor\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Eroor\n");
		exit(99);
	}
	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
