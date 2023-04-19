#include "function_pointers.h"

/**
 * int_index - search for an integer
 * @array: target array holding integers
 * @size: array size
 * @cmp: function pointer to compare search integer term
 *
 * Return: int element match, -1 if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	/* declare iter var */
	int i;

	/* set condition if array/cmp point to nothing */
	if (array == NULL || cmp == NULL)
		return (-1);

	/* iterate through array and compare elements */
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0) /* if element in array */
			return (i); /* return index of elem */
	}
	return (-1); /* return if elem does not match */
}
