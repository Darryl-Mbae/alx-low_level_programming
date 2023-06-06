#include "main.h"

/**
* main: _memset - fills the first n bytes with constant byte b
* @s: the area pointed to be filled
* @b: the constant byte to be replaced with
* @n: the number of bytes to replace
* Return: pointer to memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
