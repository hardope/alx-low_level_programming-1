#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/**
*print_rev - Prints to stdout in reverse
* @s: string
* Return: Length of string
*/
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	for (i = 1 - 1; i >= 0; i--)
		printf("%c", s[i]);
	printf("\n");
}
