#include "lists.h"
#include <stdlib.h>


/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: resulting sum
 */

int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum = sum + current->n;
		current = current->next;
	}
	free(current);
	return (sum);
}
