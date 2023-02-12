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
        printf("%c",h->str);
        h = h->next;
        length++;
     }
  return (length);    
}
