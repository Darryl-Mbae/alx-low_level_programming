#include "main.h"

/**
* main: _strpbrk - locates first occurence of byte in string s
* @s: string to search for
* @accept: strings to look for
* Return: pointer to bytes that match in s
*/
char *_strpbrk(char *s, char *accept)

{
	int a = 0, b;

	while (s[a])
	{
		b = 0;
		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}
			b++;
		}
		a++;
	}
	return ('\0');
}
