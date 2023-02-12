#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/*
* add_node_end - entry point
* 
*/
list_t *add_node_end(list_t **head, const char *str) {
    list_t *last_node = malloc(sizeof(list_t));
    list_t *last = *head;
    char *duplicate = strdup(str);

    last_node->str = duplicate;
    last_node->next = NULL;

    if (*head == NULL)
    {
        /* code */
        *head = last_node;
        return;
    }
    else {
        while (last->next != NULL)
        {
            /* code */
            last = last->next;
        }
        last->next = last_node;
    }
    return (last_node);
}