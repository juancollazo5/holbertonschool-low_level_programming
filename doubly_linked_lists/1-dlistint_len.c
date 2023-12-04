#include "lists.h"

/**
 * dlistint_len - amount of elements in linked list.
 * @h: pointer to linked list.
 *
 * Return: amount of nodes.
 */

size_t dlistint_len(const dlistint_t *h)
{

size_t index = 0;

	while (h != NULL)
	{
	h = h->next;
	index++;
	}


return (index);
}
