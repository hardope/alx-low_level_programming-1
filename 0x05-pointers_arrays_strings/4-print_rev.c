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

	len = -1;
	while (*s)
	{
		s++;
		len++;
	}
	
	for (i = 0; i < len/2; i++)
	{
		temp = s[i];
		s[i] = s[len - i];
		s[len - i] = temp;
	}
	printf("%s\n", s);
}
