#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i;
	const dlistint_t *current;

	if (h == NULL)
		return (0);

	i = 0;
	current = h;

	if (current->prev == NULL)
	{
		while (current)
		{
			current = current->next;
			i++;
		}
		return (i);
	}
	else
	{
		while (current->prev != NULL)
		{
			current = current->prev;
		}
		while (current)
		{
			current = current->next;
			i++;
		}
		return (i);
	}
	return (0);
}
