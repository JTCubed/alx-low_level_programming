#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to the head of the list
 * @index: index of the node, starting from 0
 *
 * Return: the node at index 'index', or NULL if it doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;

	unsigned int i;

	if (head == NULL)
		return (NULL);

	current = head;

	for (i = 0; i < index; i++)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
	}

	return (current);
}
