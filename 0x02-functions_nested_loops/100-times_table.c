#include "main.h"

/**
 * print_times_table - prints multiplication tabel starting from 0 to n number
 * @n: The highest number in the multiplication table.
 * Description: This function prints a multiplication table starting from 0
 * and going up to the specified number (n). The function ensures that the
 * table is not printed if n is greater than or equal to 15 or less than 1.
 */
void print_times_table(int n)
{
	if (n < 15 && n > 0)
	{
		int i, j;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				int r = j * i;

				printf("%3d", r);
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
