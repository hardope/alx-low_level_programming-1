#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array to serch through
 * @size: size of array
 * @cmp: function used to compare
 * Return: first index for which cmp doesn't return 0, or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, r;

	if (size > 0 && array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			r = cmp(array[i]);
			if (r)
				break;
		}
		if (i < size)
			return (i);
	}
	return (-1);
}
