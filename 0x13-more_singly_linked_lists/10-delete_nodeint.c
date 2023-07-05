#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	unsigned int count = 0;
	listint_t *node_to_delete;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{

		listint_t *temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}


	while (current != NULL && count < index - 1)
	{
		current = current->next;
		count++;
	}

	if (current == NULL || current->next == NULL)
	{
		return (-1);
	}

	node_to_delete = current->next;
	current->next = node_to_delete->next;
	free(node_to_delete);

	return (1);
}
