#include "main.h"

/**
 * checker - checks if number has natural square root
 * @a:square root
 * @b:input
 *
 * Return: -1 if number doesnt have a natural square root
 */
int checker(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (checker(a + 1, b));
}

/**
 * _sqrt_recursion - returns 0 or sends to checker
 * @n: integer to find sqrt of
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (checker(1, n));
}
