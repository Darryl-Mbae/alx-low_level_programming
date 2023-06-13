#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: a pointer to a combined string or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, length1, length2, length;
	char *combined;

	length1 = length2 = 0;

	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
			length1++;
	}

	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
			length2++;
	}

	length = length1 + length2;
	combined = (char *)malloc(sizeof(char) * (length + 1));
	if (combined == NULL)
		return (NULL);

	for (i = 0; i < length1; i++)
		combined[i] = s1[i];
	for (j = 0; j < length2; j++, i++)
		combined[i] = s2[j];
	combined[length] = '\0';

	return (combined);
}
