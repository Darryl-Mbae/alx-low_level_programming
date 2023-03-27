#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
void print_rev(char *s)
{
	int j;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		putchar(s[i]);
	}
	putchar('\n');

	for (j = i; j <= i ; j--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
