#include <stdio.h>
/**
 * main - prints the name number of arguments passed as input
 * @argc: number of arguments passed at command
 * @argv: pointers to strings of arguments
 * Return: always 0.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%i\n", argc - 1);
	return (0);
}
