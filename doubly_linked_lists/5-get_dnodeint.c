#include "lists.h"

/**
 * get_dnodeint_at_index - get node from linked list
 * @head: starting pointer to linked list.
 * @index: measure amount of nodes in linked list.
 *
 * Return: node from linked list.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *get_node = head;
	unsigned int num = 0;

	while (get_node != NULL)
	{
		if (num == index)
			return (get_node);
		get_node = get_node->next;
		num++;
	}

return (get_node);
}
