#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
void print_rev(char *s)
{
	int l = _strlen(s);
	int a = l;
	int j;

	for (j = a; j > 0 ; j--)
	{
		putchar(*(s+j));
	}
	putchar('\n');
}
