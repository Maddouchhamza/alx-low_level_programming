#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Starting point
 *
 * Return: 0
 */
int main(void)
{
	int n, last_digit;
	char first_string[] = "Last digit of";
	char option1[] = "and is greater than 5";
	char option2[] = "and is 0";
	char option3[] = "and is less than 6 and not 0";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	last_digit = n % 10;
	if (last_digit > 5)
	{
		printf("%s %d is %d %s\n", first_string, n, last_digit, option1);
	}
	else
	{
		if (last_digit == 0)
		{
			printf("%s %d is %d %s\n", first_string, n, last_digit, option2);
		}
		else
		{
			printf("%s %d is %d %s\n", first_string, n, last_digit, option3);
		}
	}

	return (0);
}
