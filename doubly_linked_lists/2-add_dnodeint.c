#include "lists.h"

/**
 * add_dnodeint - adding new node to linked list.
 * @head: pointer to linked list.
 * @n: integer value.
 *
 * Return: new node.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node;

new_node = malloc(sizeof(dlistint_t)); /*Allocate space.*/

if (new_node == NULL)
	return (NULL);

new_node->n = n; /*Adding new node.*/
new_node->next = *head; /*New node to be place in the head.*/
new_node->prev = NULL; /*Moving back is NULL.*/

if (*head != NULL)
{
	(*head)->prev = new_node;
}
	*head = new_node;
return (new_node);
}
