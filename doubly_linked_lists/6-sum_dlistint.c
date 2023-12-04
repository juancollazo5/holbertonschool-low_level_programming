#include "lists.h"

/**
 * sum_dlistint - sum of all data in linked list.
 * @head: pointer to linked list.
 *
 * Return: sum of data.
 */

int sum_dlistint(dlistint_t *head)
{
int sum = 0;

if (head == NULL) /*Error proof.*/
{
	return (0);
}

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

return (sum);
}
