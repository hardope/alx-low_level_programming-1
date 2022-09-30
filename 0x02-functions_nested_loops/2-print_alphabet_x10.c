#include "main.h"
/**
 * print_alphabet_x10 - its a function in the main header print
 *
 * Return: Always returns 0
 */

void print_alphabet_x10(void)
{
int a;
int i;
for (i = 1; i <= 10;)
{
for (a = 'a'; a <= 'z'; a++)
{
_putchar(a);
}
i++;

_putchar('\n');
}

}
