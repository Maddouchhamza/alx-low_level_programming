#include <stdio.h>
/**
 * main - prints first 50 Fibonacci numbers
 *
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	unsigned long f1 = 0, f2 = 1, fn;
	float sum;

	while (fn < 4000000)
	{
		fn = f1 + f2;

		if (fn % 2 == 0)
		{
			sum += fn;
		}
		f1 = f2;
		f2 = fn;
	}
		printf("%.0f\n", sum);
		return (0);
}
