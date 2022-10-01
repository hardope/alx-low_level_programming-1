#include<stdio.h>
#include "2-strlen.c"

/**
 * puts_half - puts half of int
 *
 * @str: string to split
 */
void puts_half(char *str)
{
	int i;
	int check = 0;

	if (_strlen(str) % 2 != 0)
	{
		check += 1;
	}
	for (i = (_strlen(str) + check) / 2; i < _strlen(str); i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
