#include "stdio.h"

/**
 * main - main block
 * description - program that prints first 50 Fibonacci numbers
 * Return: Always (success)
 */
int main(void)
{
int count = 2;
long int i = 1, j = 2;
long int k;
printf("%lu, ", i);
while (count <= 50)
{
if (count == 50)
{
printf("%lu\n", j);
}
else
{
printf("%lu, ", j);
}
k = j;
j += i;
i = k;
count++;
}
return (0);
}
