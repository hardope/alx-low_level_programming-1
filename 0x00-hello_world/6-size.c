#include <stdio.h>
/**
* main - like a room where programs work
* printf: to output a text, expression etc
* Return: always 0 (that is return nothing)
*/
int main(void)
{
printf("Size of a char: %i byte(s)\n", sizeof(char));
printf("Size of an int: %i byte(s)\n", sizeof(int));
printf("Size of a long int: %i byte(s)\n", sizeof(long int));
printf("Size of a long long int: %i byte(s)\n", sizeof(long long int));
printf("Size of a float: %i byte(s)\n", sizeof(float));
return (0);
}
