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
		j = 0;
		while (*(argv[i]+j) != '\0')
		{
			if (!isdigit(*(argv[i]+j)))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0); 
}
