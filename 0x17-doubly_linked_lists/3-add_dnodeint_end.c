#include "lists.h"

/**
 * add_dnodeint_end - add at end elements of a dlistint_t list.
 * @head: The head of the dlistint_t lis.
  @n: value to add
 * Return: node or null.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	last = *head;
	while (last->next !=NULL)
		last = last->next;
	last->next = new;
	new->prev = last;

	return (new);
}
