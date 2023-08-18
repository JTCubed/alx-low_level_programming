#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: double pointer to the head of the list
 * @idx: index of the list where the new node should be added (starts at 0)
 * @n: data of the new node
 *
 * Return: the address of the new node, or NULL if failed or index out of range
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *c, *new;
	unsigned int count;

	count = 0;
	c = *h;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	while (c)
	{
		if (count == idx)
		{
			if (c->next == NULL)
			{
				new->next = NULL;
				c->next = new;
				new->prev = c;
			}
			else if (c->prev == NULL)
			{
				c->prev = new;
				new->next = c;
			}
			else
			{
				c->prev->next = new;
				new->next = c;
				new->prev = c->prev;
				c->prev = new;
			}
		}
		count++;
		c = c->next;
	}
	return (new);
}
