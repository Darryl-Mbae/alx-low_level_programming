#include "main.h"

/**
 * times_table - prints multiplication tabel starting from 0 to n number
 *
 */
void print_times_table(int n)
{
	if (n < 15 && n > 0)
	{
		int i,j;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				int r = j * i;
				printf("%d",r);
				if (j >= 0)
				{
					putchar(',');
					putchar(' ');
				}
			}
			printf("\n");
		}
	}
}
