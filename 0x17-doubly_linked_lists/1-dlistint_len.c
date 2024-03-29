#include "lists.h"

#include "lists.h"

/**
 * dlistint_len - Prints all the elements of a dlistint_t list.
 * @h: The head of the dlistint_t lis.
 *
 * Return: The number of nodes in the list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
