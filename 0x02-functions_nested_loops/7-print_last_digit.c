#include "main.h"
/**
*  print_last_digit - Print
* @a: description
* Return: Values
*/

int print_last_digit(int a)

{
int last;

a = (int)(a);
if (a < 0)
a = (-1) * a;
last = a % 10;
if ((last + '0') == '(')
last = 8;
_putchar(last + '0');

return (last);

}
