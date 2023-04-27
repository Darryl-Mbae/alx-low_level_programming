#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: Const double pointer of structure list_t for beginning
 * @str: Const char pointer for data to be added
 * Return: List with new node for list_t list, NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{

	unsigned int i;
	list_t *lst;
	list_t *temp;

	lst  = malloc(sizeof(list_t));

	if (str == NULL)
		return (NULL);

	if (lst == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		;

	if (*head == NULL)
	{
		*head = lst;
		lst->len = i;
		lst->str = strdup(str);
		lst->next = NULL;
		return (lst);
	}

	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = lst;

	lst->len = i;
	lst->str = strdup(str);
	lst->next = NULL;

	return (lst);

}
