#include "list.h"
#include <stdlib.h>

/*
 * add_nodeint_end - entry point
 * @n: member
 * @head: member
 * Return: node
*/

listint_t *add_nodeint_end(listint_t **head, const int n) {
    listint_t *ptr;
    int item;
    int point = &item;

    ptr = (struct listint_s*)malloc(sizeof(struct listint_s*));
    if (ptr == NULL)
    {
        return (NULL);
    }
    else 
    {
        ptr->n = item;
        ptr->next = head;
        head = ptr;
    }
    return(point);
}