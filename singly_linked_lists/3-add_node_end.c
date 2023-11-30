#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
#include "2-add_node.c"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: A pointer to the head of the linked list.
 * @str: The string to be stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *pointerchain = NULL;
	list_t *h = *head;

	if (!h)
	{
		add_node(head, str);
		return (*head);

	}
	while (h->next)
	{
		h = h->next;
	}
	pointerchain = malloc(sizeof(list_t));
	if (!pointerchain)
	{
		free(pointerchain);
		return (NULL);
	}

	pointerchain->str = strdup(str);
	pointerchain->len = strlen(str);
	pointerchain->next = NULL;

	if (!head)
		*head = pointerchain;
	else
		h->next = pointerchain;

	return (pointerchain);
}
