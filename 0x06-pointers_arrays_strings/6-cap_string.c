#include<stdio.h>
#include "main.h"
#include <string.h>
/**
* cap_string - Main Function
* @text: Parameter
*/
char *cap_string(char *text);
{
	int i;

	for (i = 0; text[i] != '\0'; i++)
		if (text[i] >= 97 && text[i] <= 122)
			text[i] = text[i] - 32;

	return (s);
}
