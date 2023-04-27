#include "lists.h"

/**
* print_list - function  prints all the elements of a list_t list
* @h: pointer to the linked list
* Return: returns number of nodes
*/

size_t print_list(const list_t *h)
{
	int checker = 0;

	const list_t *prntlist;

	prntlist = h;

	if (h == NULL)
		return (0);

	while (prntlist != NULL)
	{
		if (prntlist->str == NULL)
		{
			printf("[0] (nil)\n");
			prmtlist = prntlist->next;
			checker++;
			continue;
		}

		printf("[%d] %s\n", prntlist->len, prntlist->str);
		checker++;
		prntlist = prntlist->next;

	}

	return (checker);
}
