#include<stdio.h>

/**
 * main - Entry point
 * Description: prints all the numbers of base 16 in lowercase.
 * Return Always 0 (Success)
 */

int main(void)
{
	int i;
	char digit = '0';
	char letter = 'a';
	
	for (i = 0; i < 16; i++)
	{
		if (i < 10)
		{
			putchar(digit);
			digit++;
		}
		else
		{
			putchar(letter);
			letter++;
		}
	}
	putchar('\n');
	return (0);
}
