#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i, j, sum = 0;
	
	for (i = 1; i < argc; i++)
	{
		char *p;
		p = argv[i];
		j = 0;
		while (*(p+j) != '\0')
		{
			if (!isdigit(*(p+j)))
			{
				printf("Error\n");
				return (1);
			}
			//printf("%c\n", *(p+j));
			j++;
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0); 
}
