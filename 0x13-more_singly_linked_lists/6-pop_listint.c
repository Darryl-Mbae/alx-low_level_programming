#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of listint_t list and returns its data.
 * @head: Pointer to a pointer to the head of the list.
 *
 * Return: The data of the deleted node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp_node;
	int data;

	if (head == NULL || *head == NULL)
		return (0);

	temp_node = *head;
	data = temp_node->n;
	*head = temp_node->next;
	free(temp_node);

	return (data);
}

