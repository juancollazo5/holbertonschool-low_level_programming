#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node of linked list.
 * @head: starting point for linked list.
 * @index: measure value for linked list.
 *
 * Return: delete node.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *move = *head;

if (*head == NULL)
{
	return (-1);
}

	while (index != 0)
	{
		if (move == NULL)
			return (-1);

	move = move->next;
	index--;
	}

	if (move == *head)
	{
	*head = move->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
	move->prev->next = move->next;
		if (move->next != NULL)
			move->next->prev = move->prev;
	}

free(move);
return (1);
}
