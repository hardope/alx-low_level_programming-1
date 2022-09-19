#include<stdio.h>
#include<string.h>

/**
* reset_to_98 - Reset to 98
* @s: string
* Return: Length of string
*/
int _strlen(char *s)
{
	int len;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
