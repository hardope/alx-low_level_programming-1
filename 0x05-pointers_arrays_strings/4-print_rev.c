#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/**
*print_rev - Prints to stdout in reverse
* @s: string
* Return: Length of string
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/**
*print_rev - Prints to stdout in reverse
* @s: string
* Return: Length of string
*/
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s)
	{
		s++;
		len++;
	}
	return (len);
}
void print_rev(char *s)
{
	int len, i, temp;

	len = _strlen(*s);
	
	for (i = 0; i < len/2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
	printf("%s\n", s)
}
