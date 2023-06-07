#include "main.h"

/**
 * checker - checks to see if input is a prime number
 * @a:divisor
 * @b:input
 * Return:1 for prime number 0 if not
 */
int checker(int a, int b)
{
	if (b < 2 || b % a == 0)
		return (0);
	else if (a > b / 2)
		return (1);
	else
		return (checker(a + 1, b));
}

/**
 * is_prime_number - sends to checker
 * @n:input
 * Return:1 for prime number 0 if not
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (checker(2, n));
}
