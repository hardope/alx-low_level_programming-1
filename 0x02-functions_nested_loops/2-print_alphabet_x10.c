#include "main.h"
/**
 * print_alphabet_x10 - Prints aplhabets in lowercase
 */
void print_alphabet_x10(void)
{
	int a;
	int count;

	count = 0;
	while (count < 10)
	{
		a = 97;

		while (a < 123)
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		count++;
	}
}
