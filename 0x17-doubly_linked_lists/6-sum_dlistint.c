#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data(n) of a dlistint_t list.
 * @head: pointer to the head of the list
 *
 * Return: sum of all the data, or 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *c;

	int i;

	if (head == NULL)
		return (0);

	i = 0;

	c = head;

	while (c)
	{
		i = i + c->n;
		c = c->next;
	}
	return (i);
}
