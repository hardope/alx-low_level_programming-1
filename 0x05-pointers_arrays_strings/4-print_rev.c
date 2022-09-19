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
	int len, i, temp;

	len = 0;
	while (*s)
	{
		s++;
		len++;
	}
	
	for (i = 0; i < len/2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 2];
		s[len - i - 2] = temp;
	}
	printf("%s\n", s);
}
