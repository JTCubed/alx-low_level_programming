#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next;

	if (current == NULL)
	{
		return;
	}
	else
	{
		while (current != NULL)
		{
			next = current->next;
			free(current);
			current = next;
		}
	}
}
