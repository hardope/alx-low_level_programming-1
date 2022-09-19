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
	int a = 48;
	int b = 44;

	while (a < 58)
	{
		putchar(a);
		if (a != 57)
		{
			putchar(b);
			putchar(32);
		}
		a++;
	}
	putchar('\n');
	return (0);
}
