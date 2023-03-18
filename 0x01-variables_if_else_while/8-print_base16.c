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
			putchar(digit); // Print digits 0-9
			digit++; // Increment digit to the next character
		}
		else
		{
			putchar(letter); // Print letters a-f
			letter++; // Increment letter to the next character
		}
	}
	putchar('\n');
	return (0);
}
