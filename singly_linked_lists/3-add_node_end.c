#include "lists.h"

/**
 * add_node_end - adding new node at end of linked list.
 * @head: starting point of linked list.
 * @str: string of characters.
 *
 * Return: new node.
 */

list_t *add_node_end(list_t **head, const char *str)
{

	list_t *new_node, *tail;
	/*Allocate new node.*/
	new_node = malloc(sizeof(list_t));

	if (str == NULL || new_node == NULL)	/*Error proof it.*/
	return (NULL);
	/*Copy string and measure lenght of new node.*/
	new_node->str = strdup(str);
	new_node->len = strlen(str);

	if (new_node->str == NULL)	/*Error proof it.*/
	{
	free(new_node);
	return (NULL);
	}
	/*new node will be the last node so, the pointer goes NULL.*/
	new_node->next = NULL;

	if (*head == NULL)
	{
	*head = new_node;
	return (new_node);
	}

	tail = *head;

	while (tail->next != NULL)
	tail = tail->next;

	/*Update the pointer to the last node.*/
	tail->next = new_node;
return (new_node);
}
