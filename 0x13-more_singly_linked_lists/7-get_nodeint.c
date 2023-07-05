#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node we're looking for, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);


	if (index == 0)
		return (current);
	while (i < index && current != NULL)
	{
		current = current->next;
		i++;
	}
	return (current);
}
