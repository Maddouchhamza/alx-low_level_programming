#include<stdio.h>
/*
 * main - combinations of two digits
 *
 * Return 0 always
 */
int main(void)
{
	int i,j;
	char str[10]={'0','1','2','3','4','5','6','7','8','9'};	
	
	for(i=0;i<10;i++)
	{
		for (j=i+1;j<10;j++)
		{
			putchar(str[i]);
			putchar(str[j]);
			putchar(',');
		}	
	}
	return (0);
}
