#include <stdio.h>
/**
 * main - Entry point
 *
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	int ch;

	for (i = 48; i < 58; i++)
		putchar(i);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
