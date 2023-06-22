#include "variadic_functions.h"

/**
 * sum_them_all -  Calculates the sum of its parameters
 * @n: The value of the sum
 * Return: returns the sum of parameters but if 0 returns 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int value;
	unsigned int i;
	int sum = 0;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		value  = va_arg(args, int);
		sum = sum + value;
	}
	if (sum == 0)
	{
		return (0);
	}
	else
		return (sum);

	va_end(args);
}
