#include<stdio.h>
#include "main.h"
#include <string.h>
/**
* _strcat - Main Function
* @text: Parameter
*/
char *string_toupper(char *text);
{
	int i;

	for (i = 0; i < strlen(*text); i++)
	{
		int c = text[i];

		if (c > 97 || c < 123)
		{
			c = c - 32;
		}
	}
}
