#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
#include <stdio.h>

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: A pointer to the head of the linked list.
 * @str: The string to be stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *pointerchain = NULL;

	pointerchain = malloc(sizeof(list_t));
	if (!pointerchain)
	{
		free(pointerchain);
		return (NULL);
	}
	if (!head)
	{
		(*head)->str = strdup(str);
		(*head)->next = NULL;
	}
	else
	{
		pointerchain->next = *head;
		pointerchain->str = strdup(str);
		pointerchain->len = strlen(str);
	}
	*head = pointerchain;

	return (*head);
}
