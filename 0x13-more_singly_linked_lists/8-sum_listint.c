#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n) of
 * listint_t linked list.
 *
 * @head: Pointer to the head node of the list.
 *
 * Return: The sum of all the data (n) in the linked list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
