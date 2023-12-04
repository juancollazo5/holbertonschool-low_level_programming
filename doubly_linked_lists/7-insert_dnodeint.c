#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node to linked list.
 * @h: starting point of linked list.
 * @idx: index for linked list.
 * @n: integer value.
 *
 * Return: insert new node.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *in_node;
dlistint_t *move = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));


	while (idx != 1)
	{
	move = move->next;
		if (move == NULL)
			return (NULL);
	idx--;
	}

	if (move->next == NULL)
		return (add_dnodeint_end(h, n));

	in_node = malloc(sizeof(dlistint_t));

	if (in_node == NULL)
		return (NULL);

	in_node->n = n;
	in_node->next = move->next;
	in_node->prev = move;
	move->next->prev = in_node;
	move->next = in_node;

	return (in_node);
}
