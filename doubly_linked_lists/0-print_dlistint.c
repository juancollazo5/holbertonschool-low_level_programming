#include "lists.h"

/**
 * print_dlistint - print elements of linked list.
 * @h: pointer to linked list.
 *
 * Return: the number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t index = 0;

	while (h != NULL)
	{
	printf("%d\n", h->n);
	h = h->next;
	index++;
	}

return (index);
}
