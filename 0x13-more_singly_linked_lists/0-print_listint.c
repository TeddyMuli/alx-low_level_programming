#include "list.h"
#include <stdio.h>


size_t print_listint(const listint_t *h) {
    size_t node = 0;
    listint_t *temporary;

    if (!h)
    {
    }
    while (temporary != NULL)
    {
        printf("%d - ", temporary->n);
        temporary = temporary->next;
        node++;
    }
    return (node);
}