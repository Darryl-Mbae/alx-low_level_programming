#include "function_pointers.h"

/**
 * print_name - function to print name
 * @f: variable to hold string name
 * @name: name of person
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	/* set condition for when f/name points to/contains nothing */
	if (name == NULL || f == NULL)
		return; /* return nothing */

	/* call pointer to name string */
	f(name);
}
