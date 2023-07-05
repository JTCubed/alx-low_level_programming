#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */


int pop_listint(listint_t **head)
{
	listint_t *current = *head;
	int n = (*head)->n;

	if (*head == NULL)
		return (-1);

	*head = (*head)->next;
	free(current);

	return (n);
}
