#include<stdio.h>
#include<stdlib.h>
/* more headers goes there */
/* Initial short description */
/* betty style doc for function main goes there */
/**
* main - This is a description
* Return: 0 if successful. 1 otherwise
*/
int main(void)
{
	char b;

	int a = 97;

	while (a < 123)
	{
		b = (char)(a);
		putchar(b);
		a++;
	}
	putchar('\n');
	return (0);
}
