#include<stdio.h>
/**
 * main - Start point
 *
 *
 * Return: always 0
 */
int main(void)
{
	int i, j, k, m;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0';  k <= '9'; k++)
			{
				for(m = '1'; m <= '9'; m++)
				{
				
					if (i <= k)
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(m);
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
