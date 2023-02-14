#include "list.h"
#include <stdio.h>


size_t print_listint(const listint_t *h) {
    size_t node = 0;
    listint_t *temporary;
   // temporary = h;

    while (temporary != NULL)
    {
        /* code */
        printf("d - ", temporary->n);
        temporary = temporary->next;
        node++;
    }
    return (node);
}