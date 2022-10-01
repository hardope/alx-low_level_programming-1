#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/* more headers goes there */
/* Initial short description */
/* betty style doc for function main goes there */
/**
* main - This is a description
* Return: 0 if successful. 1 otherwise
*/
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last = n % 10;
	if (last == 0)
		printf("%i is zero\n", n);
	if (last > 0)
		printf("%i is positive\n", n);
	if (last < 0)
		printf("%i is negative\n", n);
	return (0);
}
