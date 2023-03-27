#include<stdio.h>

char *s = "12345678910";
int i = 0;

int main()
{
	for (i = 0; i < 10; i++)
	{
		printf("%c",*(s++));
	}
	printf("\n");
	printf("%c\n", *s);
	printf("%c\n", *(s-1));
	printf("%c\n", *(s-2));
	return (0);
}	
