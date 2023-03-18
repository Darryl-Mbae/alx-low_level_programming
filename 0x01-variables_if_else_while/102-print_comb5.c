#include <stdio.h>

/**
 * main - Entry point
 * Description: prints all possible combinations of 2 nos
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = 1; j < 100; j++)
		{
			putchar(i/10 + '0');
			putchar(i%10 + '0');
			putchar(' ');
			putchar(j/10 + '0');
			putchar(j%10 + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

