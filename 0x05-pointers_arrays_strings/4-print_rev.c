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
	int len = 0;

	while (*s)
	{
		s++;
		len++;
	}

	while (s[i] != '\0')
	{
		i++;
		printf("%c", s[len + i]);
		len--;
	}
	printf("\n");
}
