#include "main.h"
/**
 * _islower - its a function in the main header that allows us to print
 * @c: an integer argument
 * Return: Always returns 0
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
return (0);
}
