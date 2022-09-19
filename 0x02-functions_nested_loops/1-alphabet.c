#include "main.h"
/**
 * print_alphabet - its a function in the main header that allows us to print
 *
 * Return: Always returns 0
 */

void print_alphabet(void)
{
	int a = 97;

	while (a <= 122)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');

}
