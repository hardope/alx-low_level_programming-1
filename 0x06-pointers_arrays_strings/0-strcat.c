#include<stdio.h>
#include "main.h"
#include <string.h>
/**
* _strcat - Main Function
* @dest: Parameter
* @src: parameter
* Return: Value
*/
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (j = 0; dest[j] != '\0'; j++)
	{}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[j] = src[i];
	}
	dest[j] = '\0';

	return (dest);
}
