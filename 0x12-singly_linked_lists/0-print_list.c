#include "lists.h"

/**
* print_list - function  prints all the elements of a list_t list
* @h: pointer to the linked list
* Return: returns number of nodes
*/

size_t print_list(const list_t *h)
{
	int checker = 0;

	const list_t *ptr;

	ptr = h;

	if (h == NULL)
		return (0);

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
			ptr = ptr->next;
			checker++;
			continue;
		}

		printf("[%d] %s\n", ptr->len, ptr->str);
		checker++;
		ptr = ptr->next;

	}

	return (checker);
}
