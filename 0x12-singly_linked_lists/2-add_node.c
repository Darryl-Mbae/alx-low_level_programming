#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: Const double pointer of structure list_t for beginning
 * @str: Const char pointer for data to be added
 * Return: List with new node for list_t list, NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{

	unsigned int i;
	list_t *lst;

	lst  = malloc(sizeof(list_t *));

	if (str == NULL)
	{
		lst->str = NULL;
		lst->len = 0;
		lst->next = *head;
	}

	if (lst == NULL)
		return (NULL);

	lst->next = *head;
	*head = lst;

	lst->str = strdup(str);

	for (i = 0; str[i]; i++)
		;

	lst->len = i;

	return (lst);
}
