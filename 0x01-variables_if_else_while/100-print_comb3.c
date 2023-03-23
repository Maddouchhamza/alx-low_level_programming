#include<stdio.h>
/*
 * main - combinations of two digits
 *
 * Return 0 always
 */
int main(void)
{
	int i, j;
		
	for(i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			if(i < j)
			{
				if(i == '0' && j == '1' )
				{
					goto etic;
				}
				putchar(' ');
				etic:		
				putchar(i);
				putchar(j);
				
				if(i == '8')
				{
					putchar(' ');
					break;
				}
			
				putchar(',');
			}
		}	
	}
	return (0);
}
