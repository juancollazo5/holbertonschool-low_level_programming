#include "lists.h"

/**
 * free_dlistint - free linked list.
 * @head: pointer to linked list.
 */

void free_dlistint(dlistint_t *head)
{

	dlistint_t *tail;

	while (head != NULL)
	{
		tail = head;
		head = head->next;
		free(tail);
	}
}
