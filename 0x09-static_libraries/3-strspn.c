#include "main.h"

/**
* main: _strspn - function that gets the lenght of a prefix substring
* @s: string to check prefix
* @accept: strings to check in prefix
* Return: number of bytes in the segment
*/

unsigned int _strspn(char *s, char *accept)

{
	unsigned int count = 0;

	unsigned int i = 0, j;

	while (accept[i])
	{
		j = 0;
		while (s[j] != ' ')
		{
			if (accept[i] == s[j])
			{
				count++;
			}
			j++;
		}
		i++;
	}
	return (count);
}
