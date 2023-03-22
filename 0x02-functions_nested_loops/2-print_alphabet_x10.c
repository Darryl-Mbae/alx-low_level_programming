#include "main.h"

/**
 * main -  Entry Level
 * Description: Repeats line 10 times
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 1 ; 1 <= 10 ; i++)
	{
		char a;

		for(a = 'a' ; a < 'z' ; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
