#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: The value to be swapped to b by pointer *a
 * @b: The value to be swapped to a by pointer *b
 */

void swap_int(int *a, int *b)
{
	*a = b;
	*b = a;
}
