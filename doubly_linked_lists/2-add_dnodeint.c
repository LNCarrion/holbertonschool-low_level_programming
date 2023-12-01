#include <stddef.h>
#include "lists.h"

/**
 * dlistint_len - Get the number of elements in a linked dlistint_t list.
 * @h: A pointer to the head of the doubly linked list.
 *
 * Description:
 *   This function traverses a doubly linked list and counts the number of
 *   elements (nodes) in the list.
 *
 * Return:
 *   The number of elements (nodes) in the linked list.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return NULL;

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}
