#include<stdio.h>

/**
 * main - Entry point
 * Description: prints numbers from 0 - 9
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
