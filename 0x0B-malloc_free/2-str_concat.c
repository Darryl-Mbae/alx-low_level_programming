#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: Input string 1.
 * @s2: Input string 2.
 * Return: pointer to the combined string.
 * It returns NULL if failed
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, l1, l2, len;
	char *combined;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	l1 = 0;
	while (s1[l1] != '\0')
		l1++;
	l2 = 0;
	while (s2[l2] != '\0')
		l2++;

	len = l1 + l2;
	combined = (char *)malloc((len + 1) * sizeof(char));
	if (combined == NULL)
		return (NULL);

	for (i = 0; i < l1; i++)
		combined[i] = s1[i];
	for (j = 0; j < l2; j++, i++)
		combined[i] = s2[j];
	combined[len] = '\0';
	return (combined);
}
