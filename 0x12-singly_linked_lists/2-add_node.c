#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

list_t *add_node(list_t **head, const char *str) {
    list_t *new_node = malloc(sizeof(list_t));

    new_node->next = *head;

    head = new_node;
}