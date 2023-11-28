#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct list_s - Singly linked list structure
 * @str: String (data)
 * @len: Length of the string
 * @next: Pointer to the next node in the list
 */

typedef struct list_s
{
    char *str;
    int len;
    struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif /* LISTS_H */