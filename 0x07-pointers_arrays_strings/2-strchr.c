#include "main.h"

/**
* main: _strchr - search for a character
* @s: string to search
* @c: character to search for
* Return: pointer to the first occurrence of c
*/

char *_strchr(char *s, char c)
{
	int i;
	char *n;

	for (i = 0; *(s + i) >= '\0'; i++)
	{
		if (*(s + i) == c)
		{
			n = s + i;
			break;
		}
		else
			n = '\0';
	}
	return (n);
}
