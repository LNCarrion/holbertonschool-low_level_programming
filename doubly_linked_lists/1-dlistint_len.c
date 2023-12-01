#include <stdio.h>
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

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
