#include "list.h"
#include <stdio.h>


size_t print_listint(const listint_t *h) {
    size_t node = 0;
    listint_t *temporary;
    int nn = temporary->n;

    if (!h)
    {
    }
    while (temporary != NULL)
    {
        printf("d - ", nn);
        temporary = temporary->next;
        node++;
    }
    return (node);
}