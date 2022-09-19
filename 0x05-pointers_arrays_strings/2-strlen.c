#include<stdio.h>
#include<string.h>

/**
* reset_to_98 - Reset to 98
* @s: string
* Return: Length of string
*/
int _strlen(char *s)
{
	char c[100];

	while (*s)
	{
		*s = *c;
		s++;
		&c++;
	}
	*c = '\0';
	return (strlen(c));
}
