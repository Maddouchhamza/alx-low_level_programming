#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that copies content of a file to another file
 * @argc: number of arguments passed
 * @argv: arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char **argv)
{
	int src, dest, wr, re = 1024;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	src = open(argv[1], O_RDONLY);
	if (src < 0)
		err_exit(98, "Error: Can't read from file %s\n", argv[1]);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (dest < 0)
		err_exit(99, "Error: Can't write to %s\n", argv[2]);

	while (re == 1024)
	{
		re = read(src, buffer, 1024);

		if (re < 0)
			err_exit(98, "Error: Can't read from file %s\n", argv[1]);
		wr = write(dest, buffer, re);
		if (wr < 0)
			err_exit(99, "Error: Can't write to %s\n", argv[2]);
	}
	if (close(src) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src);
		exit(100);
	}
	if (close(dest) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest);
		exit(100);
	}
	return (0);
}
/**
 * err_exit - prints error messages to POSIX standard error
 * @code: exit status
 * @erm: error message
 * @argument: name of file causing the error
 *
 */

void err_exit(int code, char *erm, char *argument)
{
	dprintf(STDERR_FILENO, erm, argument);
	exit(code);
}
