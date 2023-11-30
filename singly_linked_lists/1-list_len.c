#include "lists.h"

/**
 * list_len - amount of elements in linked list
 * @h: pointer to linked list's structure.
 *
 * Return: number of nodes in linked list.
 */

size_t list_len(const list_t *h)
{
size_t index = 0;

	while (h != NULL)
	{
	index++;
	h = h->next;
	}

return (index);
}
