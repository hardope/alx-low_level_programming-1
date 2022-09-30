#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the minimum number of coins to make change
 * @argc: int
 * @argv: string
 * Return: int
 */

int main(int argc, char *argv[])
{
	int i, n, s, ch = 0;
	int c[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	s = atoi(argv[1]);
	if (s < 1)
		printf("0\n");
	else
	{
		for (i = 0; i < 5 && s; i++)
		{
			n = s / c[i];
			ch += n;
			s -= n * c[i];
		}
		printf("%d\n", ch);
	}
	return (0);
}
