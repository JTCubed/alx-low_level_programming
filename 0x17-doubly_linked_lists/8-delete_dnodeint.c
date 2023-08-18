#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index of a dlistint_t linked list
 * @head: double pointer to the head of the list
 * @index: index of the node that should be deleted (starts at 0)
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *c;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	c = *head;
	i = 0;
	while (c)
	{
		if (i == index)
		{
			if (c->prev == NULL)
			{
				*head = c->next;
				if (c->next)
					c->next->prev = NULL;
			}

			else if (c->next == NULL)
			{
				c->prev->next = NULL;
			}
			else
			{
				c->prev->next = c->next;
				c->next->prev = c->prev;
			}
			free(c);
			return (1);
		}
		c = c->next;
		i++;
	}
	return (0);
}
