#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * print_list - entry point
 * @h: member
 * return: size_t
 */

size_t print_list(const list_t *h) {
    int length = 0;
     while (h != NULL)
     {
        /* code */
        if (h->str != NULL)
            printf("[0]");

        else
            printf("[%d] %s\n",h->len,h->str);
            
        h = h->next;
        length++;
     }
  return (length);    
}
