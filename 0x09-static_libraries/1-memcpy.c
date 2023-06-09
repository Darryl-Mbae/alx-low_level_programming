#include "main.h"

/**
* main: _memcpy - copies n bytes from area src to area dest
* @dest: where to copy to
* @src: where to copy from
* @n: number of bytes to copy
* Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = src[i];
	}
	return (dest);
}
