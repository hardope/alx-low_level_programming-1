#include "main.h"
/**
*  jack_bauer - Print
*/
void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int l;

	int count = 0;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			if (count > 1390)
			{
				break;
			}
			for (k = 48; k < 54; k++)
			{
				for (l = 48; l < 58; l++)
				{
					count++;
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					_putchar('\n');

				}
			}
		}
	}
}
