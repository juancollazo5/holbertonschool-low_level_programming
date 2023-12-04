#include "lists.h"

/**
 * add_dnodeint_end - adding new node at end of linked list.
 * @head: starting point of linked list.
 * @n: integer value.
 *
 * Return: new node.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node, *tail;

new_node = malloc(sizeof(dlistint_t)); /*Allocate space.*/

if (new_node == NULL)
	return (NULL);

new_node->n = n;
new_node->next = NULL;

if (*head == NULL)
{
	*head = new_node;
	return (new_node);
}

tail = *head;

while (tail->next != NULL)
	tail = tail->next;

new_node->prev = tail;
tail->next = new_node;

return (new_node);
}
