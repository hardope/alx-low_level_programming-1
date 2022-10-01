#include "main.h"
#include<stdio.h>
/**
*  times_table - Print
* Return: Values
*/
void times_table(void)
{
	int j;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int c = i * j;
			int d = i * (j + 1);

			printf("%i", c);
			if (j != 9)
			{
				printf(",");
				if ((c >= 0 && c <= 9) && (d >= 0 && d <= 9))
					printf("  ");
				else
					printf(" ");
			}
		}
		printf("\n");
	}
}
