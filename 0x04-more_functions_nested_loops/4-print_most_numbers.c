#include "main.h"
/**
 * print_most_numbers - prints 0 - 9 apart from 2 & 4
 */
void print_most_numbers(void)
{
	char i;

	for (i = 48; i < 58; i++)
	{
		if (i == 50 || i == 52)
		{
			continue;
		}
		else
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
