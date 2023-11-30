#include "lists.h"

/**
 * print_list - printing elements of 'list_t' list.
 * @h: pointer to linked list's structure.
 *
 * Return: the number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t index = 0; /*Measuring point for the list.*/

	while (h != NULL) /*Conditional.*/
	{
		if (h->str == NULL) /*Conditional.*/
		printf("[0] (nil)\n");
		else
		printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		index++;
	}

	return (index);
}
