#include "lists.h"

/**
 * add_dnodeint - Prints all the elements of a dlistint_t list.
 * @head: The head of the dlistint_t lis.
 * @n: value to add
 * Return: node or null.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
