#include<stdio.h>

/**
* swap_int - Swap integers
* @a: Value of a
* @b: Value of b
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
