#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/*
 * list_len - entry point
 * @h: member
 * return: int
 */
size_t list_len(const list_t *h);

size_t list_len(const list_t *h) {
    size_t length_of_list = 0;

    while (h != NULL)
    {
        /* code */
        length_of_list++;
        h = h->next;
    }
    return (length_of_list);
}