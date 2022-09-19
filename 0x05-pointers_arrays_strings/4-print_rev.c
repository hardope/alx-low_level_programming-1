#include<stdio.h>
#include<string.h>

/**
*print_rev - Prints to stdout in reverse
* @s: string
* Return: Length of string
*/
void print_rev(char *s)
{
	printf("%s\n", strrev(*s));
}
